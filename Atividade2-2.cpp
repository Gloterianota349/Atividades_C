#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int z, x;
	float y;
	do{
		printf("\nDigite o valor para conversão: ");
		scanf("%f",&y);
		printf("Digite a operação que você deseja escolher:\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n3 - Celsius para Kelvin\n4 - Kelvin para Celsius\n");
		scanf("%d",&x);
		if(x==1){
			printf("F = %f",((y*9/5)+32));
		}
		else if(x==2){
			printf("C = %f",((y-32)*5/9));
		}
		else if(x==3){
			printf("K = %f",(y+273.15));
		}
		else if(x==4){
			printf("C = %f",(y-273.15));
		}
		else{
			printf("Você digitou uma operação inválida");
		}
		printf("\nCaso deseje sair digite 0, senão digite qualquer número\n");
		scanf("%d",&z);
	}while(z!=0);
	printf("O programa foi encerrado");
}
