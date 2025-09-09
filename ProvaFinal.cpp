#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 10
#define COLUNA 2

int matriz[LINHA][COLUNA];
float vetor[LINHA];

void preencherProdutos(){
	printf("Preencha com as informações de seus produtos: \n");
	for (int i=0; i<LINHA; i++){
		for (int j=0; j<COLUNA; j++){
			printf("\nProduto %d", i+1);
			printf("\nDigite o ID do produto: ");
			scanf("%d",&matriz[i][j]);
			j++;
			printf("Digite a quantidade em estoque do produto: ");
			scanf("%d",&matriz[i][j]);
			printf("Digite o preço do produto: ");
			scanf("%f",&vetor[i]);
		}
	}
}
void exibirProdutos(){
	for (int i=0; i<LINHA; i++){
		for (int j=0; j<COLUNA; j++){
			printf("\nProduto %d: ", i+1);
			printf("%d | ", matriz[i][j]);
			j++;
			printf("%d | ", matriz[i][j]);
			printf("%.2f", vetor[i]);
			if(matriz[i][j]<3){
				printf(" --> Estoque Baixo");
			}
		}
	}
}
void vendaProdutos(){
	int id, qtd, i, l=0;
	float vv;
	printf("\nID do produto: ");
	scanf("%d",&id);
	printf("Quantidade a vender: ");
	scanf("%d",&qtd);
	for (i = 0; i < LINHA; i++){
		if(matriz[i][0] == id){
			if(qtd <= matriz[i][1]){
				//matriz[i][1] -= qtd;
				vv = qtd * vetor[i];
				printf("\nValor da venda = %.2f", vv);
			}
			else if(matriz[i][1] == 0){
				printf("\nEstoque esgotado. Venda não permitida.");
			}
			else{
				printf("\nEstoque insuficiente.");
				printf("\nQuantidade restante do produto %d: %d", matriz[i][0], matriz[i][1]);
			}
		l++;
		break;
		}
	}
	if(l==0){
		printf("\nID inválido");
	}
	else if(qtd <= matriz[i][1]){
		printf("\n\nVenda realizada. Valor total: R$%.2f", vv);
		printf("\nQuantidade restante do produto %d: %d", matriz[i][0], matriz[i][1]-qtd);
		if((matriz[i][1]-qtd)<3){
			printf(" --> Estoque Baixo");
		}
		matriz[i][1]-=qtd;
	}
}

int main(){
	int op;
	
	setlocale(LC_ALL, "Portuguese");
	preencherProdutos();
	do{
		printf("\n\n1 - Exibir produtos\n2 - Vender produto\n0 - Sair do programa\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				exibirProdutos();
				break;
			case 2:
				vendaProdutos();
				break;
			case 0:
				printf("\nVocê encerrou o programa");
				break;
			default:
				printf("\nVocê digitou uma opção inválida\n");
		}
	}while(op!=0);
}
