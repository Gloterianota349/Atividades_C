/*Elabore um algoritmo que leia 2 matrizes bidimensionais  (2,2). 
Adicione valores a essas matrizes e depois imprima na tela os valores de cada uma.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int matriz1[2][2], matriz2[2][2], j, i, l=1;
	printf("Primeira Matriz\n");
	for(j=0; j<2; j++){
		for(i=0; i<2; i++){
			matriz1[j][i]=rand()%100;
			l++;
		}
	}
	l=1;
	printf("Segunda Matriz\n");
	for(j=0; j<2; j++){
		for(i=0; i<2; i++){
			matriz2[j][i]=rand()%100;
			l++;
		}
	}
	printf("\nPrimeira Matriz: \n");
	for(j=0; j<2; j++){
		for(i=0; i<2; i++){
			printf("(%d,%d) = %d\n", j, i, matriz1[j][i]);
		}
	}
	printf("\nSegunda Matriz: \n");
	for(j=0; j<2; j++){
		for(i=0; i<2; i++){
			printf("(%d,%d) = %d\n", j, i, matriz2[j][i]);
		}
	}
}
