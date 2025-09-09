#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int vetor[20];
	int i, j;
	for(i=0; i<20; i++){
	printf("Digite o %dº valor: ", i+1);
	scanf("%d",&vetor[i]);
	}
	for(j=0; j<20; j++){
	    if(vetor[j]%2==0){
	        printf("O vetor na posição %d é um número par\n", j+1);
	    }
	}
}
