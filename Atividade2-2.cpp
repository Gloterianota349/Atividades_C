#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int z, x;
	float y;
	do{
		printf("\nDigite o valor para convers�o: ");
		scanf("%f",&y);
		printf("Digite a opera��o que voc� deseja escolher:\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n3 - Celsius para Kelvin\n4 - Kelvin para Celsius\n");
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
			printf("Voc� digitou uma opera��o inv�lida");
		}
		printf("\nCaso deseje sair digite 0, sen�o digite qualquer n�mero\n");
		scanf("%d",&z);
	}while(z!=0);
	printf("O programa foi encerrado");
}
