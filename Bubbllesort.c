/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bubbllesort.h"
#include <stdio.h>
#include <stdlib.h>


void adicionarElem (int vetor[]){
    srand(time(NULL)); // Tirar o Bug do vicio do rand;   
    for (int i=0; i<TAM;i++){
        vetor[i] = rand()%TAM; // Adicionar os valores no vetor
    }
}
int menu(){
    // Função do menu;
    int op; 
    printf("1 - Alimentar Vetor\n2-Ordenar\n3-Mostrar Vetor\n4-Ordenar Vetor\n ");
    scanf("%i",&op);
    return op;
    
}
void mostrar(int *vetor){
    for (int i=0; i<TAM; i++){
        printf("%d\n",vetor[i]);
    }
    
}
void ordenar(int *vetor){
    int aux;
    for (int i=0;i<TAM;i++){
        for (int j=1; j<TAM;j++){
            if(vetor[j]>vetor[i]){
            aux = vetor[j]; 
            vetor[j] = vetor[i];
            vetor[i] = aux;           
            }
        }
    }
}