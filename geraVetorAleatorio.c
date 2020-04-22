#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define LIM 999999

void geraVetorAleatorio(unsigned long int *vetAux,int tam){
	
	srand(time(NULL));
	
	for(unsigned long int i=0;i<tam;i++){
		int aux = rand() * LIM / RAND_MAX;
		if(aux > 0){
			vetAux[i] = aux;
		}else{
			aux = aux * -1;
			vetAux[i] = aux;
		}
	}
	printf("\nVetor aleatorio de tamanho %d gerado!",tam);
}
