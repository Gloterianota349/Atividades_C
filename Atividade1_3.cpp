#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int num;
	printf("Digite um valor: ");
	scanf("%d",&num);
	if(num>10){
		printf("%d � maior que 10\n",num);
	}
	else if(num<10){
		printf("%d � menor que 10\n",num);
	}
	else{
		printf("%d � igual a 10\n",num);
	}
}
