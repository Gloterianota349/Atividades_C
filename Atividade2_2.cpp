#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int soma, i, num;
	printf("Digite um valor: ");
	scanf("%d",&num);
	for(i=1; i<=num; i++){
		if(num%i==0){
			printf("%d\n",i);
		}
	}	
}

