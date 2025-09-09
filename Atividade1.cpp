#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a, i, l;
	printf("Digite um número inteiro positivo: ");
	scanf("%d",&a);
	if((a%3)==0){
		for(i=0; i<=a; i++)
			if(i%3==0){
				printf("%d\n",i);
			}
	}
	else{
		for(l=0; l<=a; l++){
			if(l%5==0){
				printf("%d\n",l);
			}
		}
	}
}
