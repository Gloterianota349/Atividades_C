#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2, num3;
	printf("Digite o 1º valor inteiro: ");
	scanf("%d",&num1);
	printf("Digite o 2º valor inteiro: ");
	scanf("%d",&num2);
	printf("Digite o 3º valor inteiro: ");
	scanf("%d",&num3);
	if(num1<=num2 && num1<=num3){
		printf("%d é o menor número\n",num1);
	}
	else if(num2<=num3){
		printf("%d é o menor número\n",num2);
	}
	else{
		printf("%d é o menor número\n",num3);
	}
}
