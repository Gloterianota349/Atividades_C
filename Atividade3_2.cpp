#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int i=1, num;
	printf("Digite um valor: ");
	scanf("%d",&num);
	while(i<=num){
	    if(i%5==0){
	        printf("%d\n",i);
	    }
		i++;
	}
	if(num<5){
		printf("Não há múltiplos de 5");
	}
}
