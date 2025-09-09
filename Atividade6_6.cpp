/*Um site de compras coletivas realizará uma promoção para os 100 primeiros clientes que acessarem sua página. 
Ao entrar na página o cliente deverá informar a sua idade. 
O site quer saber a faixa etária dos clientes 
que acessarem a página nesse dia. Elabore um programa que leia a idade de 100 pessoas e 
no final informe quantidade de pessoas menores de idade e a média das pessoas maiores de idade.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[100], i, soma=0, qtd=0, qtd2=0;
	for(i=0; i<100; i++){
		printf("Digite a sua idade: " );
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<100; i++){
		if(vetor[i]<18){
			qtd++;
		}
		else{
			soma=soma+vetor[i];
			qtd2++;
		}
	}
	printf("A quantidade de pessoas menores de idade = %d", qtd);
	if(qtd2==0){
		printf("\nNão há maiores de idade");
	}
	else{
		printf("\nA média das pessoas maiores de idade = %.2f", (float)soma/qtd2);
	}
}
