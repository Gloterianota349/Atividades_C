/*Elabore um algoritmo que leia 2 matrizes bidimensionais  (4,4). 
Adicione valores a essas matrizes. 
Some as duas matrizes e adicione em outra matriz. 
Imprima a matriz com o resultado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int matriz1[4][4], matriz2[4][4], j, i, l=1;
	printf("Primeira Matriz\n");
	for(j=0; j<4; j++){
		for(i=0; i<4; i++){
			matriz1[j][i]=rand()%100;
			printf("[%d][%d] = %d\n", j, i, matriz1[j][i]);
			l++;
		}
	}
	l=1;
	printf("Segunda Matriz\n");
	for(j=0; j<4; j++){
		for(i=0; i<4; i++){
			matriz2[j][i]=rand()%100;
			printf("[%d][%d] = %d\n", j, i, matriz2[j][i]);
			l++;
		}
	}
	printf("\nSoma matrizes: \n");
	for(j=0; j<4; j++){
		for(i=0; i<4; i++){
			printf("(%d,%d) = %d\n", j, i, matriz1[j][i]+matriz2[j][i]);
		}
	}
}
