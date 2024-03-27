#include<stdio.h>
#include<locale.h>
//aluno: Davi Amaral de Souza Cardoso Eng. Eletrica 1 semestre
int main(){
	setlocale(LC_ALL,"");
	float pretsalarial,menor=99999999999;
	int i,idade,maior=0;
	char prenome[20],nome[20],sobrenome[20];
	for(i=0;i<5;i++){
		printf("\nDigite seu prenome\n");
		fflush(stdin);
		gets(prenome);
		printf("\nDigite seu nome\n");
		fflush(stdin);
		gets(nome);
		printf("\nDigite seu sobrenome\n");
		fflush(stdin);
		gets(sobrenome);
		printf("\nDigite sua idade\n");
		scanf("%d",&idade);	
		printf("\nDigite sua pretensão salarial\n");
		scanf("%f",&pretsalarial);
		printf("\n\n		Código do %dºcandidato: %c%c%c\n",i+1,prenome[0],nome[0],sobrenome[0]);
		if(idade>=maior){
			maior=idade;
		}
		if(pretsalarial<=menor){
			menor=pretsalarial;
		}
}	
printf("\n\nIdade do candidato mais velho: %d\nMenor pretensão salarial: R$ %.2f\n\n",maior,menor);	
}
