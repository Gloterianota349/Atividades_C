#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int vetor[20];
	int i, j;
	for(i=0; i<20; i++){
	printf("Digite o %d� valor: ", i+1);
	scanf("%d",&vetor[i]);
	}
	for(j=0; j<20; j++){
	    if(vetor[j]%2==0){
	        printf("O vetor na posi��o %d � um n�mero par\n", j+1);
	    }
	}
}
