/*Elabore um programa que leia 10 valores inteiros guarde em um vetor. 
Crie mais dois vetores de nome cubo e Quadrado e preencha com os valores do primeiro vetor. 
Calcule o cubo dos valores do primeiro vetor e guarde no vetor cubo. Faça a mesma coisa com o vetor quadrado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10], cubo[10], quadrado[10], i;
	for(i=0; i<10; i++){
		printf("Digite o %dº valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<10; i++){
		cubo[i]=vetor[i]*vetor[i]*vetor[i];
		quadrado[i]=vetor[i]*vetor[i];
	}
	for(i=0; i<10; i++){
		printf("\n\nO cubo de %d = %d\nO quadrado de %d = %d", vetor[i], cubo[i], vetor[i], quadrado[i]);
	}
}
