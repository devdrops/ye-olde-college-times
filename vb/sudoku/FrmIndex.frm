VERSION 5.00
Begin VB.Form FrmIndex 
   BorderStyle     =   4  'Fixed ToolWindow
   Caption         =   "SUDOKU"
   ClientHeight    =   5055
   ClientLeft      =   45
   ClientTop       =   315
   ClientWidth     =   8025
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   5055
   ScaleWidth      =   8025
   StartUpPosition =   2  'CenterScreen
   Begin VB.Frame Frame2 
      Caption         =   "Controles"
      Height          =   4845
      Left            =   5760
      TabIndex        =   82
      Top             =   90
      Width           =   2145
      Begin VB.CommandButton Command4 
         Caption         =   "Gerar Sudokus!"
         Height          =   495
         Left            =   90
         TabIndex        =   86
         Top             =   540
         Width           =   1935
      End
      Begin VB.CommandButton Command3 
         Caption         =   "Acertos"
         Height          =   495
         Left            =   90
         TabIndex        =   85
         Top             =   1230
         Width           =   1935
      End
      Begin VB.CommandButton Command2 
         Caption         =   "Encerrar Programa"
         Height          =   495
         Left            =   90
         TabIndex        =   84
         Top             =   4260
         Width           =   1935
      End
      Begin VB.CommandButton Command1 
         Caption         =   "Limpar Campos"
         Height          =   495
         Left            =   90
         TabIndex        =   83
         Top             =   3690
         Width           =   1935
      End
   End
   Begin VB.Frame Frame1 
      Height          =   4845
      Left            =   90
      TabIndex        =   0
      Top             =   90
      Width           =   5595
      Begin VB.TextBox txtL6 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   81
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   80
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   79
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   78
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   77
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   76
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   75
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   74
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   73
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   72
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   71
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   70
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   69
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   68
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   67
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   66
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   65
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   64
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   63
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   62
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   61
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   60
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   59
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   58
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Height          =   405
         Index           =   6
         Left            =   3840
         TabIndex        =   57
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Height          =   405
         Index           =   7
         Left            =   4410
         TabIndex        =   56
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Height          =   405
         Index           =   8
         Left            =   4980
         TabIndex        =   55
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   54
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   53
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   52
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   51
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   50
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   49
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   48
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   47
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   46
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   45
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   44
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   43
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   42
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   41
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   40
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   39
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   38
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   37
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   36
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   35
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   34
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   33
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   32
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   31
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   3
         Left            =   1980
         TabIndex        =   30
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   4
         Left            =   2550
         TabIndex        =   29
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Alignment       =   1  'Right Justify
         Height          =   405
         Index           =   5
         Left            =   3120
         TabIndex        =   28
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   27
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   26
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL6 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   25
         Top             =   3330
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   24
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   23
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL7 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   22
         Top             =   3810
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   21
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   20
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL8 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   19
         Top             =   4290
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   18
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   17
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL3 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   16
         Top             =   1740
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   15
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   14
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL4 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   13
         Top             =   2220
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   12
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   11
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL5 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   10
         Top             =   2700
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   9
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   8
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL2 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   7
         Top             =   1140
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   6
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   5
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL1 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   4
         Top             =   660
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Height          =   405
         Index           =   2
         Left            =   1230
         TabIndex        =   3
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Height          =   405
         Index           =   1
         Left            =   660
         TabIndex        =   2
         Top             =   180
         Width           =   495
      End
      Begin VB.TextBox txtL0 
         Height          =   405
         Index           =   0
         Left            =   90
         TabIndex        =   1
         Top             =   180
         Width           =   495
      End
      Begin VB.Line Line4 
         X1              =   3720
         X2              =   3720
         Y1              =   150
         Y2              =   4770
      End
      Begin VB.Line Line3 
         X1              =   1830
         X2              =   1830
         Y1              =   150
         Y2              =   4770
      End
      Begin VB.Line Line2 
         X1              =   90
         X2              =   5510
         Y1              =   3210
         Y2              =   3210
      End
      Begin VB.Line Line1 
         X1              =   90
         X2              =   5510
         Y1              =   1650
         Y2              =   1650
      End
   End
End
Attribute VB_Name = "FrmIndex"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
    Dim X As Integer
    
    For X = 0 To 8 Step 1
        txtL0(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL1(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL2(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL3(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL4(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL5(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL6(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL7(X) = ""
    Next X
    For X = 0 To 8 Step 1
        txtL8(X) = ""
    Next X
End Sub

Private Sub Command2_Click()
    End
End Sub

Private Sub Command4_Click()

    ' SEQUENCIA:
    '// RANDOMIZER
    'srand((unsigned)time(NULL));
    '// INICIA ARRAY E A BASE
    'initiate();
    '// GERA A SOLUÇÃO
    'generatesolvedsudoku();
    '// CONCILIAMENTO COM CÉLULAS
    'concealcells();
    '// COLOCA O SUDOKU
    'screenoutputSU();
    '// AGUARDA A TECLA
    'printf("Aguardando...\n\n");
    'getch();
    '// EXIBE OS RESULTADOS
    'screenoutputSO();
    'printf("Pressione qualquer tecla...\n");
    'getch();


End Sub

Sub initiate()
    Dim i, j, k, l, cell, box As Integer
    
    For i = 0 To 512 Step 1
        j = i
        countcandidates(i) = 0
        Do While j > 0
            If (j Mod 2) > 0 Then countcandidates(i) = countcandidates(i) + 1
            j = (j - (j Mod 2)) / 2
        Loop
    Next i

    For i = 0 To 3 Step 1
        For j = 0 To 3 Step 1
            For k = 0 To 3 Step 1
                For l = 0 To 3 Step 1
                    cell = (j * 27) + (i * 3) + (l * 9) + k
                    box = (j * 3) + i
                    cellsboxnumber(cell) = box
                    boxcellnumbers(box)((l * 3) + k) = cell
                Next l
            Next k
        Next j
    Next i
    
End Sub

Sub generatesolvedsudoku()
    Dim i, j, k, l, currentcell As Integer

    'PREPARA DADOS PARA NOVA GRADE
    For i = 0 To 81 Step 1
        unsolvedcells(i) = i
        cellscandidates(i) = 511
        solution(i) = 0
        lastcandidate(i) = 0
    Next i

    'MISTURA A ORDEM DAS CÉLULAS
    For i = 0 To 500 Step 1
        j = (Rnd() * mod81)
        k = (Rnd() * mod81)
        l = unsolvedcells(j)
        unsolvedcells(j) = unsolvedcells(k)
        unsolvedcells(k) = l
    Next i

    cellptr=80;
    logsteps=-1;

    while (cellptr>-1){
        currentcell=unsolvedcells[cellptr];
        if (solution[currentcell]==0){
            for(i=0;i<cellptr;i++){
                if (countcandidates[cellscandidates[unsolvedcells[i]]]<countcandidates[cellscandidates[unsolvedcells[cellptr]]]){
                    j=unsolvedcells[i];
                    unsolvedcells[i]=unsolvedcells[cellptr];
                    unsolvedcells[cellptr]=j;
                }
            }
            currentcell=unsolvedcells[cellptr];
            j=1;
            for(i=0;i<9;i++){
                if ((cellscandidates[currentcell]&j)>0){
                    solution[currentcell]=i+1;
                    break;
                }
                j=j*2;//update bitmask
            }

            if (countcandidates[cellscandidates[currentcell]]==1) lastcandidate[currentcell]=1;
            removecandidates(currentcell);
            j=cellptr;
            cellptr--;

            if (cellptr>-1){
                for(i=0;i<j;i++){
                    if (cellscandidates[unsolvedcells[i]]==0){
                        cellptr++;
                        break;
                    }
                }
            }
        }
        else{
            if (lastcandidate[currentcell]==1){
                undo();
                lastcandidate[currentcell]=0;
                cellptr++;
            }
            else{
                j=1;
                k=solution[currentcell];
                undo();
                for(i=0;i<k;i++) j=j*2;
                for(i=k;i<9;i++){
                    if ((cellscandidates[currentcell]&j)>0){
                        solution[currentcell]=i+1;
                        break;
                    }
                    j=j*2;//update bitmask
                }
                lastcandidate[currentcell]=1;

                if (solution[currentcell]<9){
                    for(i=solution[currentcell];i<9;i++){
                        j=j*2;
                        if ((cellscandidates[currentcell]&j)>0){
                            lastcandidate[currentcell]=0;
                            break;
                        }
                    }
                }
                removecandidates(currentcell);
                j=cellptr;
                cellptr--;

                if (cellptr>-1){
                    for(i=0;i<j;i++){
                        if (cellscandidates[unsolvedcells[i]]==0){
                            cellptr++;
                            break;
                        }
                    }
                }
            }
        }
    }
End Sub
