#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int i;
	float num, soma=0;
	for(i=1;i<=3;i++){
		printf("Digite o %dº valor: ",i);
		scanf("%f",&num);
		soma=soma+num;
	}
	printf("A média do aluno foi = %f\n",soma/3);
}
