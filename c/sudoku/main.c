#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int I,N,I1,N1;
void main()
{
 int c1,c2,c3,i,j,k,K,l,p,q,m,n,M,M1=0,r,r1,s,g=-1,Q=0,
     a[9][9][10],a1[10][9][9],A[9][9][10],A1[9][9][10],A2[9][9],w1[81],w2[10],w3[81],
     x[10][3],y[10][2],z[81][12],z1[81][12],z2[81][12];
 char c,C;
 randomize();
 //clrscr();
 system("cls");

//************* user interface ****************

 printf("What do u want (enter appropreate no.):\n\n(1) Suduku Question\n(2) Solve a Suduku Problem\n   ");
INF:C=getche();
 switch(C)
 {
  //case 49:clrscr();
  case 49:system("cls");
		    //1. Gennerating basic matrix:
SEL1:     g=-1;n=0;
	  for(i=0;i<9;i++)
	  {
	   for(j=0;j<9;j++)
	   {  for(k=0;k<10;k++) a[i][j][k]=k;  }
	  }

	  for(i=0;i<9;i++)        // create the basic row
	  {
	   for(j=0;j<9;j++)        // create the basic row
	   {
	    for(l=1;l<10;l++) w1[l]=l;
	    p=9;
SEL2:	    l=1+random(p);
	    k=w1[l];
	    if(a[i][j][k]==0&&p>0)
	    {
	     w1[l]=w1[p]; p--;
	     goto SEL2;
	    }
	    if(p==0) goto SEL1;

	    a[i][j][0]=k;
	    for(p=1;p<10;p++) a[i][j][p]=0;

	    for(p=0;p<9;p++)
	    { a[i][p][k]=0; a[p][j][k]=0; }

	    for(p=(i/3)*3;p<(i/3+1)*3;p++)
	    {
	     for(l=(j/3)*3;l<(j/3+1)*3;l++) a[p][l][k]=0;
	    }
	   }
	  }//fi
	  for(i=0;i<9;i++)  //a1=a   &&n>26
	  {
	   for(j=0;j<9;j++)
	   {
	    a1[0][i][j]=a[i][j][0];
	    A2[i][j]=a[i][j][0];
	   }
	  }
	  Q=1;


SEL:
	  for(i=0;i<9;i++)  //a1=a   &&n>26
	  {
	   for(j=0;j<9;j++)
	   {
	    a[i][j][0]=A2[i][j];
	    if(A2[i][j]>0) { for(k=1;k<10;k++) a[i][j][k]=0;}
	    else { for(k=1;k<10;k++) a[i][j][k]=k;}
	   }
	  }
	  for(l=0;l<81;l++) w1[l]=l;
	  p=80;
SEL3:	  l=random(p+1);  //l:0->p
	  i=w1[l]/9;j=w1[l]%9;

	  if(a[i][j][0]==0&&p>0)
	  {
	   w1[l]=w1[p]; p--;
	   goto SEL3;
	  }
	  c=i*9+j; 		      //c=last i,j    n++;
	  for(k=0;k<10;k++) a[i][j][k]=k;
	  goto EL;

SEL4:     if(n<50) goto SEL1;

	  for(i=0;i<9;i++)
	  {
	   if(i%3==0)
	   printf("\n");
	   for(j=0;j<9;j++)
	   {
	    if(j%3==0)
	    printf(" ");
	    if(A2[i][j]>0) printf("%d ",A2[i][j]);
	    else printf("- ");
	   }
	   printf("\n");
	  }
	  printf("\nTotal no. of data elenents: %d",81-n);

	  printf("\n\n Display solution (y/n):");
	  c=getche();
	  printf("\n");
	  for(i=0;i<9&&(c=='y'||c==13);i++)
	  {
	   if(i%3==0)
	   printf("\n");
	   for(j=0;j<9;j++)
	   {
	    if(j%3==0)
	    printf(" ");
	    printf("%d ",a1[0][i][j]);
	   }
	   printf("\n");
	  }
	  goto END;

  case 50:
	  //clrscr();
	  system("cls");
	  for(i=0;i<9;i++)
	  {
	   for(j=0;j<9;j++)
	   {  for(k=1;k<10;k++) a[i][j][k]=k;  }
	  }

	  printf("Enter suduku:\n");
	  for(i=0;i<9;i++)
	  {
	   for(j=0;j<9;j++)
	   {
	    c=getche();
	    printf(" ");
	    if(c==45) a[i][j][0]=0;
	    else if(c>48&&c<58)
	    {
	     a[i][j][0]=c-48;
	     for(k=1;k<10;k++) a[i][j][k]=0;
	    }
	    else if(c==8){printf("\b\b"); j=j-2;}
	    else {printf("\b\b"); j--;}
	   }//fj
	   printf("\n");
	  }//fi
	  break;
  default:{printf("\b \b");printf("\a"); goto INF;}
 }

// *** end user interface ***

EL:                   //********* elemination *************
// eleminating the posibilities in cell array of row, colom & block corresponding to those cells whose value is  decided
 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   if(a[i][j][0]!=0)
   {
    for(k=0;k<9;k++)
    {
     a[i][k][a[i][j][0]]=0;
     a[k][j][a[i][j][0]]=0;
    }
    for(k=(i/3)*3;k<(i/3+1)*3;k++)
    {
     for(l=(j/3)*3;l<(j/3+1)*3;l++)
     a[k][l][a[i][j][0]]=0;
    }
   }
  }
 }

//singletons:
//-for each element:
 q=0;
 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   p=0;
   for(k=1;k<10;k++)
   {
    if(a[i][j][k]==k)
    {
     K=k;
     p++;
    }
   }
   if(p==1)
   {
    a[i][j][0]=K;
    a[i][j][K]=0;
    q=1;
   }
  }
 }
 if(q==1)
 goto EL;

 //-for each row & coloum: check if in a row/coloum any one posibilities is not repeated in other row/coloum
 for(i=0;i<9;i++)
 {
  for(k=1;k<10;k++)
  { x[k][0]=0; y[k][0]=0; }
  for(j=0;j<9;j++)
  {
   for(k=1;k<10;k++)
   {
    if(a[i][j][k]==k)
    { x[k][0]++; x[k][1]=j; }

    if(a[j][i][k]==k)
    { y[k][0]++; y[k][1]=j; }
   }//fk
  }//fj

  for(k=1;k<10;k++)
  {
   if(x[k][0]==1)
   {
    a[i][x[k][1]][0]=k;
    for(l=1;l<10;l++)
    a[i][x[k][1]][l]=0;
    goto EL;
   }
   if(y[k][0]==1)
   {
    a[y[k][1]][i][0]=k;
    for(l=1;l<10;l++)
    a[y[k][1]][i][l]=0;
    goto EL;
   }
  }
 }//i

 //-for each block:
 for(k=1;k<10;k++)  x[k][0]=0;

 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   for(k=1;k<10;k++)
   {
    if(a[i/3*3+j/3][i%3*3+j%3][k]==k)
    {
     x[k][0]++;
     x[k][1]=i/3*3+j/3;
     x[k][2]=i%3*3+j%3;
    }
   }//k
  }//j

  for(k=1;k<10;k++)
  {
   if(x[k][0]==1)
   {
    a[x[k][1]][x[k][2]][0]=k;
    for(l=1;l<10;l++)
    a[x[k][1]][x[k][2]][l]=0;
    goto EL;
   }
  }
 }//i

 //z[m][>2] contains the posibilities,z[][0],z[][1]-its possition & z[][2]-no.
 PRO:
 m=0;M=0;
 for(i=0;i<9;i++)
 {
  for(j=0;j<9;j++)
  {
   if(a[i][j][0]==0)
   {
    M=1;
    z[m][0]=i;
    z[m][1]=j;
    s=3;
    for(k=1;k<10;k++)
    {
     if(a[i][j][k]!=0)
     {
      z[m][s]=a[i][j][k];
      s++;
     }
    }
    z[m][s]=0;
    z[m][2]=s-3;
    m++;
   } //if(a[i][j][0]==0)
  }//fj
 } //fi
 z[m][2]=0;

 if(M1!=0)
 {
  if(M1==2) goto PRO2;
  if(M1==3) goto PRO3;
  if(M1==4) goto PRO4;
 }

// cells with same posibilities--
 for(c1=2;c1<9&&M&&M1==0;c1++) //c1=k
 {
  for(c2=0;c2<9;c2++)         //c2=i
  {
   //in row:
   p=0;
   for(j=0;j<9;j++)
   w1[j]=1;
   for(m=0;z[m][2]!=0;m++)
   {
    if(z[m][0]==c2&&z[m][2]==c1&&p==0)
    {
     w1[z[m][1]]=0;         //j==z[m][1]
     w2[0]=m;
     p++;
    }
    else if(z[m][0]==c2&&z[m][2]==c1)
    {
     for(j=0;j<c1&&z[m][j+3]==z[w2[0]][j+3];j++) 1;

     if(j==c1)
     {
      w1[z[m][1]]=0;
      w2[p]=m;
      p++;
     }
    }
   }//m

   if(p==c1)
   {
    for(j=0;j<9;j++)
    {
     if(w1[j])
     {
      for(s=3;s<c1+3;s++)
      a[c2][j][z[w2[0]][s]]=0;     //z[w2[0]][s]=posibilities
      M1=1;
     }
    }//j
   }//if(p==c1)
   if(M1==1){M1=2; goto PRO;}

PRO2:   //in coloum:
   p=0;
   for(j=0;j<9;j++)
   w1[j]=1;
   for(m=0;z[m][2]!=0;m++)
   {
    if(z[m][1]==c2&&z[m][2]==c1&&p==0)
    {
     w1[z[m][0]]=0;
     w2[0]=m;
     p++;
    }
    else if(z[m][1]==c2&&z[m][2]==c1)
    {
     for(j=0;j<c1&&z[m][j+3]==z[w2[0]][j+3];j++) 1;

     if(j==c1)
     {
      w1[z[m][0]]=0;
      w2[p]=m;
      p++;
     }
    }
   }//m

   if(p==c1)
   {
    for(j=0;j<9;j++)
    {
     if(w1[j])
     {
      for(s=3;s<c1+3;s++)
      a[j][c2][z[w2[0]][s]]=0;
      M1=1;
     }
    }//j
   }//if
   if(M1==1){M1=3; goto PRO;}
PRO3:
  //in block:
   p=0;
   for(j=0;j<9;j++) w1[j]=1;

   for(m=0;z[m][2]!=0;m++)
   {
    if(z[m][0]/3*3+z[m][1]/3==c2&&z[m][2]==c1&&p==0)
    {
     w1[z[m][0]%3*3+z[m][1]%3]=0;
     w2[0]=m;
     p++;
    }
    else if(z[m][0]/3*3+z[m][1]/3==c2&&z[m][2]==c1)
    {
     for(j=0;j<c1&&z[m][j+3]==z[w2[0]][j+3];j++) 1;

     if(j==c1)
     {
      w1[z[m][0]%3*3+z[m][1]%3]=0;
      w2[p]=m;
      p++;
     }
    }
   }//m

   if(p==c1)
   {
    for(j=0;j<9;j++)
    {
     if(w1[j])
     {
      for(s=3;s<c1+3;s++)
      a[c2/3*3+j/3][c2%3*3+j%3][z[w2[0]][s]]=0;   //a[i/3*3+j%3][i%3*3+j/3][z[w2[0]][s]]=0;
      M1=1;
     }
    }//j
   }//if(p==c1)
   if(M1==1){M1=4; goto PRO;}
PRO4:
;
  }//i
 }//k
 if(M1==1){M1=5; goto EL;}

	 //**************** error check ******************
 if(g>0)
 {
  for(i=0;i<9;i++)
  {
   for(k=1;k<10;k++)
   { w1[k]=0; w2[k]=0; }

   for(j=0;j<9;j++)
   {
    if(a[i][j][0]!=0)
    {
     c1=a[i][j][0];
     w1[c1]++;
     if(w1[c1]>1&&g==1) goto R;
     if(w1[c1]>1&&g==3) goto R1;
    }
    if(a[j][i][0]!=0)
    {
     c2=a[j][i][0];
     w2[c2]++;
     if(w2[c2]>1&&g==1) goto R;
     if(w2[c2]>1&&g==3) goto R1;
    }
   }
  }

  for(i=0;i<7;i=i+3)
  {
   for(j=0;j<7;j=j+3)
   {
    for(k=1;k<10;k++) w1[k]=0;

    for(p=i;p<i+3;p++)
    {
     for(q=j;q<j+3;q++)
     {
      if(a[p][q][0]!=0)
      {
       c3=a[p][q][0];
       w1[c3]++;
       if(w1[c3]>1&&g==1) goto R;
       if(w1[c3]>1&&g==3) goto R1;
      }
     }
    }
   }
  }

  for(i=0;i<9;i++)
  {
   for(j=0;j<9;j++)
   {
    for(k=0;k<10&&a[i][j][k]==0;k++) 1;
    if(k==10&&g==1) goto R;
    if(k==10&&g==3) goto R1;
   }
  }
 }//if(g>0)
 g++;
	      //**** random selection *****
 if(M&&g==0)
 {
  i=0;
  for(k=2;k<9;k++)
  {
   for(m=0;z[m][2]!=0;m++)
   {
    if(z[m][2]==k)
    {
     z1[i][0]=z[m][0];
     z1[i][1]=z[m][1];
     for(s=2;z[m][s]!=0;s++)
     z1[i][s]=z[m][s];
     z1[i][s]=0;
     i++;
    }
   }
  }
  z1[i][2]=0;
		     //copy A=a, so A is the original sdk
  for(i=0;i<9;i++)
  {
   for(j=0;j<9;j++)
   { for(k=0;k<10;k++) A[i][j][k]=a[i][j][k]; }
  }

  //ass. values of least prob. z[][]:
  for(I=0;z1[I][2]!=0;I++)
  {
   for(N=3;N<3+z1[I][2];N++)      //z1[I][N]!=0
   {
    a[z1[I][0]][z1[I][1]][0]=z1[I][N]; //ass. value
    for(l=1;l<10;l++)
    a[z1[I][0]][z1[I][1]][l]=0;
    g=1;
    goto EL;
R:  M=1;
    //copy a=A
    for(i=0;i<9;i++)
    {
     for(j=0;j<9;j++)
     {
      for(k=0;k<10;k++)
      a[i][j][k]=A[i][j][k];
     }
    }
   }
  }//I
 }//if(M&&g==0)

 else if(M&&g==2&&z1[I][2]!=0)
 {
  i=0;
  for(k=2;k<9;k++)
  {
   for(m=0;z[m][2]!=0;m++)
   {
    if(z[m][2]==k)
    {
     z2[i][0]=z[m][0];
     z2[i][1]=z[m][1];
     for(s=2;z[m][s]!=0;s++)
     z2[i][s]=z[m][s];
     z2[i][s]=0;i++;
    }
   }
  }
  z2[i][2]=0;
  for(i=0;i<9;i++)
  {
   for(j=0;j<9;j++)
   {
    for(k=0;k<10;k++)
    A1[i][j][k]=a[i][j][k];
   }
  }

  for(I1=0;z2[I1][2]!=0;I1++)
  {
   for(N1=3;N1<3+z2[I1][2];N1++)
   {
    a[z2[I1][0]][z2[I1][1]][0]=z2[I1][N1]; //ass. value
    for(l=1;l<10;l++)
    a[z2[I1][0]][z2[I1][1]][l]=0;
    g=3;
    goto EL;
R1: M=1;
    for(i=0;i<9;i++)  //copy a=A1
    {
     for(j=0;j<9;j++)
     {
      for(k=0;k<10;k++)
      a[i][j][k]=A1[i][j][k];
     }
    }
   }//fN1
  }//fI1
  if(z1[I][2]!=0) goto R; //new
 }//if(M&&g==2)


 if(M==0)
 {
  p=10;
  for(k=0;k<Q&&Q>0;k++)
  {
   p=0;
   for(i=0;i<9;i++)
   {
    for(j=0;j<9&&a1[k][i][j]==a[i][j][0];j++) 1;
    if(j<9) { p=1; break;} // a!=a1
   }

   if((C==50&&p==0)||(C==49&&p==0&&g>0))	   //a1 &a are same
   {
    if(g==3&&z2[I1][2]!=0){g=2;goto R1;}
    if(z1[I][2]!=0){g=0;goto R;}
   }

   else if(C==49&&p==0&&g==0)           //a1 &a are same
   {
    n++; i=c/9;j=c%9;
    A2[i][j]=0;
    g=-1; goto SEL;
   }
  }//fk
  if(C==49&&p==1) goto SEL4;	 //a1 &a are not same



  for(i=0;i<9;i++)
  {
   for(j=0;j<9;j++)
   {
    a1[Q][i][j]=a[i][j][0];
   }
  }
//************** print O/P: **************
  for(i=0;i<9;i++)
  {
   if(i%3==0)
   printf("\n");
   for(j=0;j<9;j++)
   {
    if(j%3==0)
    printf(" ");
    printf("%d ",a[i][j][0]);
   }
   printf("\n");
  }
  Q++;
 }//if(M==0)

 if(g==4&&z2[I1][2]!=0){g=2; goto R1;}
 if(z1[I][2]!=0) {g=0; goto R;}

END:
 printf("END");
 getch();
}
