#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int vetor[10];
	int i, j, l;
	for(i=0; i<10; i++){
	printf("Digite o %d� valor: ", i+1);
	scanf("%d",&vetor[i]);
	}
	l=0;
	for(j=0; j<10; j++){
	    if(vetor[j]%2==0){
	        l+=1;
	    }
	}
	printf("A quantidade de n�meros pares = %d\n", l);
}
