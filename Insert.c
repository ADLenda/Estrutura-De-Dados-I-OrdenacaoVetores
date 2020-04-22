#include <stdio.h>
#define TAM 1000
void Insert(unsigned long int *vetAux){
	int x,j;
	int nTroca = 0;
	for(int i=1;i<TAM;i++){
		x = vetAux[i];
		j = i-1;
		while((j >=0) && vetAux[j] > x){
			vetAux[j+1] = vetAux[j];
			j = j-1;
			nTroca++;
		}
		vetAux[j+1] = x;
	}
	printf("\nVetor ordenado por insert sort!");
	printf("\nForam realizadas %d trocas!", nTroca);
}
