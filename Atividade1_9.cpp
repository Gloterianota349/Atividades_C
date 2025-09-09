#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define LINHA 2
#define COLUNA 2

int matriz[LINHA][COLUNA], vetor[5], i, j, somavetor=0;
	
void somaVetor(){
	for(i=0; i<5; i++){
		somavetor+=vetor[i];
	}
	printf("\nA soma dos elementos do vetor = %d\n", somavetor);
}
void preencherMatriz(){
	for(i=0; i<LINHA; i++){
		for(j=0; j<COLUNA; j++){
			matriz[i][j]=somavetor;
		}
	}
}
void imprimirMatriz(){
	for(i=0; i<LINHA; i++){
		printf("\n");
		for(j=0; j<COLUNA; j++){
			printf("%d     ", matriz[i][j]);
		}
	}
}
	
main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	for(i=0; i<5; i++){
		printf("Digite o valor da %dº posição do vetor: ", i+1);
		scanf("%d",&vetor[i]);
		//vetor[i]=rand()%100;
	}
	somaVetor();
	preencherMatriz();
	imprimirMatriz();
}
