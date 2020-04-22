#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Bubble(unsigned long int *vetAux, int TAM);
void Insert(unsigned long int *vetAux);
void geraVetorAleatorio(unsigned long int *vetAux,int tam);
void SalvarArquivo(int *vetAux,int tam, char *nomeArq);	

int main(){
	
	//Parte 1 - gerar valores aleatorios entre 1 - 999.999
	//VETORES DE TAMANHO MIL
	int op;
	int flag1 = 0;
	while(flag1 == 0){
	printf("\n ---------- FUNCOES -------------");
	printf("\n 1 - Gerar valores aleatorios e salva-los em arquivos .txt ");
	printf("\n 2 - Ordenar Valores   ");
	printf("\n 3 - Carregar valores do arquivos");
	printf("\n 0 - Fechar   ");
	scanf("%d",&op);
	switch (op){
		case 1:{
			int op2;
			int flag2 = 0;
			while(flag2 == 0){	
			printf("\n -- QUANTIDADE --");
			printf("\n 1 - MIL     ");
			printf("\n 2 - DEZ MIL ");
			printf("\n 3 - CEM MIL ");
			printf("\n 0 - VOLTAR ");
			printf("\n Opcao: ");
			scanf("%d",&op2);
			switch (op2){
				case 1:{

					int TAM = 1000;
					int vetMil[TAM];
					char nomeARQ[50];
					printf("\nGerando vetor de mil valores aleatorios....");
					printf("\nDigite o nome do arquivo: ");
					scanf("%s",&nomeARQ);
					strcat(nomeARQ,".txt");
					
					geraVetorAleatorio(vetMil,TAM);
					printf("\nValores gerados com sucesso!");
					printf("\nSalvando vetores em arquivos TXT...");
					SalvarArquivo(vetMil,TAM,nomeARQ);
					printf("\nArquivos salvos com sucesso!");
					flag2 = -1;
					break;
				}
				case 2:{
					int TAM = 10000;
					int vetDezMil[TAM];
					char nomeARQ[50];
					printf("\nGerando vetor de dez mil valores aleatorios...");
					printf("\nDigite o nome do arquivo: ");
					scanf("%s",&nomeARQ);
					strcat(nomeARQ,".txt");
					
					geraVetorAleatorio(vetDezMil,TAM);
					printf("\nValores gerados com sucesso!");
					printf("\nSalvando vetores em arquivos TXT...");
					SalvarArquivo(vetDezMil,TAM,nomeARQ);
					printf("\nArquivos salvos com sucesso!");
					flag2 = -1;					
					break;
					}
				case 3:{
					unsigned long int TAM = 100000;
					unsigned long int vetCemMil[TAM];
					char nomeARQ[50];
					printf("\nGerando vetor de cem mil valores aleatorios...");
					printf("\nDigite o nome do arquivo: ");
					scanf("%s",&nomeARQ);
					strcat(nomeARQ,".txt");
					
					geraVetorAleatorio(vetCemMil,TAM);
					printf("\nValores gerados com sucesso!");
					printf("\nSalvando vetores em arquivos TXT...");
					SalvarArquivo(vetCemMil,TAM,nomeARQ);
					printf("\nArquivos salvos com sucesso!");
					flag2 = -1;
					break;
					
				}
				case 0:{
					printf("Voltando...");
					flag2 = -1;
					break;
					
					}
					break;
					}
				}
				break;
		case 2:{
			int op3;
			int flag3 = 0;
			while(flag3 == 0){	
			printf("\n -- METODOS DE ORDENAÇÃO --");
			printf("\n 1 - BUBBLE SORT           ");
			printf("\n 2 - MERGE SORT            ");
			printf("\n 3 - SELECT SORT           ");
			printf("\n 0 - VOLTAR ");
			scanf("%d",&op3);
			
			switch(op3){
				case 1:{
					int op4;
					int flag4 =0;
					while(flag4 == 0){
					printf("\n -- ORDENANDO POR BUBBLE SORT ---");
					printf("\n Qual vetor deseja ordenar ?     ");
					printf("\n 1 - MIL                         ");
					printf("\n 2 - DEZ MIL                     ");
					printf("\n 3 - CEM MIL                     ");
					scanf("%d",&op4);
					
					switch(op4){
						case 1:{
							int tam = 1000;
							unsigned long int vet[tam];
							char nomeArq[50];
							printf("\nDigite o nome do arquivo: \n");
							scanf("%s",&nomeArq);
							strcat(nomeArq,".txt");
	
							LerArquivo(vet,tam,nomeArq);
							printf("\n Tamanho do arquivo - %d",tam);
							printf("\n[%d] - %d",1001,vet[1001]);
							
							
							//Bubble(vet,tam);
							break;
						}
					}
					case 0:{
						flag4 =1;
						break;
					}
		
					}
					break;
				}
			
			}
			flag3 = 1;
			break;
		}		
		case 0:{
			flag1 = 1;
			break;
		}
				}
	
			}
		}
	}
	//END OF MAIN
}
