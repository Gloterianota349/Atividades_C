/*Implemente um sistema simples de gerenciamento de alunos
em C. O programa deverá permitir ao usuário adicionar alunos com suas notas,
calcular a média de cada aluno, exibir as informações dos alunos e mostrar o
aluno com a maior média. Todo o sistema deve ser organizado por meio de
funções.

Requisitos:

Menu principal com opções:
Adicionar aluno e notas.
Calcular e exibir a média de cada aluno.
Exibir todos os alunos.
Exibir o aluno com maior média.
Sair do programa.
Cada aluno terá e .
Limitar o número máximo de alunos para 10.
Funções para cada tarefa: adicionar alunos, calcular média, exibir dados e encontrar o aluno com maior média.

Explicação:
:
adicionarAluno: Adiciona nome e notas de um aluno.
calcularMedia: Calcula a média de um aluno específico.
exibirAlunos: Exibe todos os alunos com suas médias.
alunoMaiorMedia: Encontra e exibe o aluno com a maior média.
:
Os dados dos alunos são armazenados em arrays globais.
A entrada de nomes é tratada com scanf para capturar strings com espaços.
: O sistema aceita até 10 alunos; se o limite for atingido, ele avisa o usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX_ALUNOS 10

char nome[MAX_ALUNOS][100];
float notas[MAX_ALUNOS][3];
int totalAlunos=0;

void adicionarAluno(){
	if(totalAlunos>=MAX_ALUNOS){
		printf("Limite máximo de alunos atingido\n");
		return;
	}
	printf("Digite o nome do aluno: ");
	scanf(" %[^\n]", nome[totalAlunos]);
	for(int i=0; i<3; i++){
		printf("Digite a %dª nota do aluno: ", i+1);
		scanf("%f",&notas[totalAlunos][i]);
	}
	totalAlunos++;
	printf("Aluno cadastrado\n");
}

float calcularMedia(int index){
	float soma = 0;
	for(int i=0; i<3; i++){
		soma+=notas[index][i];
	}
	return soma/3;
}

void exibirAlunoMedia(){
	int i = 0, l=0;
	char aluno[100];
	printf("Qual o nome do aluno a ser procurado?");
	scanf(" %[^\n]", aluno);
	if(totalAlunos==0){
		printf("Nenhum aluno cadastrado\n");
		return;
	}
	for(int j=0; j<=totalAlunos; j++){
		if(strcmp(aluno, nome[j])==0){
			printf("\nNome do aluno: %s || Média: %.2f\n", nome[j], calcularMedia(j));
			l++;
		}
	}
	if(l==0){
		printf("Aluno não existente");
	}
}

void exibirAlunos(){
	if(totalAlunos==0){
		printf("Nenhum aluno cadastrado\n");
		return;
	}
	printf("\nLista de alunos: \n");
	for(int i=0; i<totalAlunos; i++){
		printf("\nNome do aluno: %s || Média: %.2f\n", nome[i], calcularMedia(i));
	}
}

void alunoMaiorMedia(){
	if(totalAlunos==0){
		printf("Nenhum aluno cadastrado\n");
		return;
	}
	int posicaoMaior = 0;
	float maiorMedia = calcularMedia(0);
	for(int i=0; i<totalAlunos; i++){
		if(calcularMedia(i)>maiorMedia){
			maiorMedia=calcularMedia(i);
			posicaoMaior=i;
		}
	}
	printf("\nMaior média - Aluno %s: %.2f", nome[posicaoMaior], maiorMedia);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	do{
    	printf("\n***** Menu principal *****\n\n1 - Adicionar aluno e notas\n2 - Exibir a média de um aluno\n3 - Exibir todos os alunos\n4 - Exibir o aluno com maior média\n0 - Sair do programa\n\nEscolha uma opção: ");
    	scanf("%d",&op);
    	switch(op){
    	    case 1: 
    	    adicionarAluno();
    	    break;
    	    case 2:
    	    exibirAlunoMedia();
    	    break;
    	    case 3:
    	    exibirAlunos();
    	    break;
    	    case 4:
    	    alunoMaiorMedia();
    	    break;
    	    case 0:
    	    printf("Você optou por sair do programa");
    	    break;
    	    default:
    	    printf("Você digitou uma opção inválida");
    	}
	}while(op!=0);
}
