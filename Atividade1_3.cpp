#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int num;
	printf("Digite um valor: ");
	scanf("%d",&num);
	if(num>10){
		printf("%d é maior que 10\n",num);
	}
	else if(num<10){
		printf("%d é menor que 10\n",num);
	}
	else{
		printf("%d é igual a 10\n",num);
	}
}
