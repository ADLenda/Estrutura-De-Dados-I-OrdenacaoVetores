#include <stdio.h>
#include <time.h>

void Bubble(unsigned long int *vetAux, long TAM){
	unsigned long int aux, nTroca;
	clock_t Tick[2];
	Tick[0] = clock();
	
	for(int u = TAM-1 ; u > 0;u--){
		for(int i=0; i<u;i++){
			if(vetAux[i] > vetAux[i+1]){
				aux = vetAux[i];
				vetAux[i] = vetAux[i+1];
				vetAux[i+1] = aux;
				nTroca++;
				printf("\nTROCA %d",nTroca);
			}
		}	
	}
	Tick[1] = clock();
	double tempo = (Tick[1] - Tick[0]) * 1000.0 / CLOCKS_PER_SEC;
	printf("\nVetor ordenado por Bubble sort!");
	printf("\nForam realizadas %d trocas!", nTroca);
	printf("\nTempo gasto: %.6f ms.", tempo);
}

