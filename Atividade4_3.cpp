#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2, num3;
	printf("Digite o 1� valor inteiro: ");
	scanf("%d",&num1);
	printf("Digite o 2� valor inteiro: ");
	scanf("%d",&num2);
	printf("Digite o 3� valor inteiro: ");
	scanf("%d",&num3);
	if(num1<=num2 && num1<=num3){
		printf("%d � o menor n�mero\n",num1);
	}
	else if(num2<=num3){
		printf("%d � o menor n�mero\n",num2);
	}
	else{
		printf("%d � o menor n�mero\n",num3);
	}
}
