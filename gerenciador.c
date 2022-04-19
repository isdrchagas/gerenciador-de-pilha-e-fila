#include<stdio.h>
#include<stdbool.h>
#include "fila.h"
#include "pilha.h"

void main() {

    int action;
    bool system = true;

    while (system)
    {
        printf("::::::: GERENCIADOR DE FILAS E PILHAS :::::::\n");
        printf("\n");

        printf ("Qual ação deseja executar: \n");
        printf("1 - Manipular uma fila \n2 - Manipular uma pilha \n0 - para sair\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("saiu\n");
            break;

            case 1 :
            printf ("fila\n");
            break;

            case 2 :
            printf ("pilha\n");
            break;

            default :
            system = false;
            printf ("Valor invalido!\n");
            break;
        }
    } 
}
