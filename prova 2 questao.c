#include<stdio.h>
#include<locale.h>
//aluno: Davi Amaral de Souza Cardoso Eng. Eletrica 1 semestre
int main(){
	setlocale(LC_ALL,"");
	float conquista=370868,feira=616279;
	int i=0;
	while(conquista<=feira){
		//Colocamos conquista<=feira porque queremos que consquista ultrapasse feira, nao apenas seja igual.
		conquista=conquista+conquista*0.0161;
		feira=feira+feira*0.0085;
		i++;
	}
	printf("Anos necess�rios para que a popul��o de Vit�ria da Conquista ultrapasse\na popula��o de Feira de Santana: %d\n\nIsso ocorrer� em %d\n\n",i,i+2022);	
}
