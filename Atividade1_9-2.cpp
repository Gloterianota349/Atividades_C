#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define LINHA 2
#define COLUNA 2

int matriz[LINHA][COLUNA], vetor[5];
	
int somaVetor(){
	int soma=0;
	for(int i=0; i<5; i++){
		soma+=vetor[i];
	}
	return soma;
}
void preencherMatriz(int valor){
	printf("Preenchendo matriz de 2x2\n");
	for(int i=0; i<LINHA; i++){
		for(int j=0; j<COLUNA; j++){
			matriz[i][j]=valor;
		}
	}
}
void imprimirMatriz(){
	printf("Matriz de 2x2: \n");
	for(int i=0; i<LINHA; i++){
		printf("\n");
		for(int j=0; j<COLUNA; j++){
			printf("%d\t", matriz[i][j]);
		}
	}
}
	
int main(){

	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	for(int i=0; i<5; i++){
		printf("Digite o valor da %dº posição do vetor: ", i+1);
		scanf("%d",&vetor[i]);
		//vetor[i]=rand()%100;
	}
	printf("Soma dos elementos do vetor = %d\n", somaVetor());
	preencherMatriz(somaVetor());
	imprimirMatriz();
}
