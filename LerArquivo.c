#include <stdio.h>
#include <string.h>

void LerArquivo(int *vetAux,int tam,char *nomeArq){
	
	FILE *arq;	
	arq = fopen(nomeArq,"rt");
	if(arq == NULL){
		printf("\nErro no arquivo\n");
	}
	
	//LE DO ARQUIVO
	for(int i=0;i<tam;i++){
		fscanf(arq,"%d\n",&vetAux[i]);
	}
	fclose(arq);
	printf("\nValores carregados do arquivo!");
	
}
