#include<stdio.h>

int main(){
	int a;
	int b;
	int array[4][3];
	int soma[7];

	printf("insira 12 numeros\n");

	for (a = 0; a < 4; a++){
		for (b = 0; b < 3; b++){
			scanf_s("%d", &array[a][b]);
		}
	}

	soma[0] = array[0][0] + array[0][1] + array[0][2];
	soma[1] = array[1][0] + array[1][1] + array[1][2];
	soma[2] = array[2][0] + array[2][1] + array[2][2];
	soma[3] = array[3][0] + array[3][1] + array[3][2];

	soma[4] = array[0][0] + array[1][0] + array[2][0] + array[3][0];
	soma[5] = array[0][1] + array[1][1] + array[2][1] + array[3][1];
	soma[6] = array[0][2] + array[1][2] + array[2][2] + array[3][2];


	printf("Linha 0: %d %d %d Total:%d\n", array[0][0], array[0][1], array[0][2], soma[0]);
	printf("Linha 1: %d %d %d Total:%d\n", array[1][0], array[1][1], array[1][2], soma[1]);
	printf("Linha 2: %d %d %d Total:%d\n", array[2][0], array[2][1], array[2][2], soma[2]);
	printf("Linha 3: %d %d %d Total:%d\n\n", array[3][0], array[3][1], array[3][2], soma[3]);

	printf("Coluna 0: %d %d %d %d Total:%d\n", array[0][0], array[1][0], array[2][0], array[3][0], soma[4]);
	printf("Coluna 1: %d %d %d %d Total:%d\n", array[0][1], array[1][1], array[2][1], array[3][1], soma[5]);
	printf("Coluna 2: %d %d %d %d Total:%d\n", array[0][2], array[1][2], array[2][2], array[3][2], soma[6]);

	fflush(stdin);
	getchar();
}