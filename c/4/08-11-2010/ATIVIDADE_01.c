/* ATIVIDADE
DATA: 08/11/2010
ALUNO: DAVI MARCONDES MOREIRA */

int main (){
	int x=5, y=6;
	int *px, *py

	px = &x;
	py = &y;

	printf("%u - %d\n", px, *py);
	
	px++;	
	py = px + 3;
	printf("%u - %d\n", px, *py);
	
	return 0;

}
