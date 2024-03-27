#include<stdio.h>
#include<math.h>
//aluno: Davi Amaral de Souza Cardoso Eng. Eletrica 1 semestre
int main(){
	float altura,pesoideal;
	char sexo,opc;
	do{
		printf("Digite o sexo\nH para Homem. M para mulher\n");
		fflush(stdin);
		scanf("%c",&sexo);
		printf("Digite a altura em metros\n");
		scanf("%f",&altura);
		if(sexo=='H'||sexo=='h'){
			pesoideal=72.7*altura;
			printf("Peso ideal para sua altura: %.2f\n",pesoideal-58 );
		} else if(sexo=='M'||sexo=='m'){
			pesoideal=62.1*altura;
			printf("Peso ideal para sua altura: %.2f\n", pesoideal-44.7);
		}
		printf("Deseja continuar? s ou n?\n\n");
		fflush(stdin);
		scanf("%c",&opc);
	}while(opc=='s'||opc=='S');
	printf("Programa finalizado!\n\n");
}
