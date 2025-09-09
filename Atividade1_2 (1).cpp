#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int soma, i, num;
	do{
		printf("Digite um valor: ");
		scanf("%d",&num);
		i++;
	}while(num>=0);
	printf("Você digitou %d números", i-1);
}
