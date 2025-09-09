#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int vetor[10], i, j;

	for(i=0; i<10; i++){
	printf("Digite o %dº valor: ", i+1);
	scanf("%d",&vetor[i]);
	}
	for(j=0; j<10; j++){
	printf("O vetor na posição %d = %d\n", j+1, vetor[j]);
	}
}
