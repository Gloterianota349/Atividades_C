//Elabore um algoritmo em C que leia 50 n�meros inteiros e mostre a m�dia dos valores existentes no intervalo entre 10 e 150 (inclusive).
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[50], i, soma=0, qtd=0;
	for(i=0; i<50; i++){
		printf("Digite o %d� valor:", i+1 );
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<50; i++){
		if(vetor[i]>=10 && vetor[i]<=150){
			soma=soma+vetor[i];
			qtd++;
		}
	}
	printf("A m�dia dos valores existentes no intervalo entre 10 e 150 = %.2f", (float)soma/qtd);
}
