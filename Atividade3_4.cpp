#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int vetor[6];
	int i, j, soma;
	for(i=0; i<6; i++){
	printf("Digite o %dº valor: ", i+1);
	scanf("%d",&vetor[i]);
	}
	soma=0;
	for(j=0; j<6; j++){
	    if(vetor[j]%2!=0){
	        soma=soma+vetor[j];
	    }
	}
	printf("A soma dos números ímpares = %d\n", soma);
}
