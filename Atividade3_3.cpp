#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2;
	printf("Digite o 1� valor inteiro: ");
	scanf("%d",&num1);
	printf("Digite o 2� valor inteiro: ");
	scanf("%d",&num2);
	if(num1>=num2){
		printf("%d\n%d",num2,num1);
	}
	else{
		printf("%d\n%d",num1,num2);
	}
}
