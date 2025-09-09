#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[20], i, maior, posicao;
	for(i=0; i<20; i++){
		printf("Digite o %dº valor:", i+1 );
		scanf("%d", &vetor[i]);
	}
	maior=vetor[0];
	posicao=0;
	for(i=1; i<20; i++){
		if(vetor[i]>=maior){
			maior=vetor[i];
			posicao=i;
		}
	}
	printf("O maior número está na posição %d", posicao+1);
}
