#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], i, qtd=0, qtd2=0;
	for(i=0; i<10; i++){
		printf("Digite o %d� valor:", i+1 );
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<10; i++){
		if(vetor[i]>0){
			qtd++;
		}
		if(vetor[i]%2!=0){
			qtd2++;
		}
	}
	printf("H� %d n�meros positivos no vetor\nH� %d n�meros �mpares no vetor", qtd, qtd2);
}
