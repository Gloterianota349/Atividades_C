#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[6], i, soma=0, j=0;
	for(i=0; i<6; i++){
		printf("Digite o %d� valor:", i+1 );
		scanf("%d", &vetor[i]);
		soma=soma+vetor[i];
		if(vetor[i]<10){
			j++;
		}
	}
	printf("Soma = %d\nM�dia = %.2f\nN�meros menores que 10 = %d", soma, (float)soma/6, j);
}
