#include <stdio.h>

void SalvarArquivo(int *vetAux,int tam,char *nomeArq){
	
	FILE *arq;	
	
	arq = fopen(nomeArq,"wt");
	if(arq == NULL){
		printf("\nErro no arquivo\n");
	}
	
	//grava no arquivo
	for(int i=0;i<tam;i++){
		fprintf(arq,"\n%d",vetAux[i]);
	}
	fclose(arq);
	printf("\nValores gravados no arquivo!");
	
}
	
