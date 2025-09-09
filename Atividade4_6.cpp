#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], i, j, k=0;
	for(i=0; i<10; i++){
		printf("Digite o %dº valor:", i+1 );
		scanf("%d", &vetor[i]);
	}
	printf("\nDigite um valor: ");
	scanf("%d", &j);
	for(i=0; i<10; i++){
		if(j==vetor[i]){
			printf("\nHá uma valor igual na casa %d\n", i+1);
			k++;
		}
	}
	if(k==0){
		printf("\nNão encontrado");
	}
}
