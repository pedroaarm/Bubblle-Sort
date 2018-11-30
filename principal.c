/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   principal.c
 * Author: pedro
 *
 * Created on 21 de Novembro de 2018, 12:24
 */

#include <stdio.h>
#include <stdlib.h>
#include "Bubbllesort.h"


int main(int argc, char** argv) {
    
    int vetor[TAM];
    int op;
    do{
        op = menu();
    switch(op){
        case 1:
            adicionarElem(vetor);
            break;
        case 2:
            ordenar(vetor);
            break;
        case 3:
            mostrar(vetor);
            break;
 
    }
    }while (op!=0);
   

    return (EXIT_SUCCESS);
}
