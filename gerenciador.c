#include<stdio.h>
#include<stdbool.h>
#include "fila.h"
#include "pilha.h"


void acaoFila() {

    int action;
    bool system = true;

    while (system)
    {
        
        printf("\n");
        printf("Qual ação de fila deseja executar:\n");
        printf("1 - inserir elemento na fila\n");
        printf("2 - remover elemento da fila\n");
        printf("3 - consultar a quantidade de elementos na fila (usar a estrutura de controle)\n");
        printf("4 - mostrar e remover todos os elementos da fila\n");
        printf("5 - consultar o maior valor da fila\n");
        printf("6 - consultar o menor valor da fila\n");
        printf("7 - consultar a media da fila\n");
        printf("8 - relatório de valores pares e ímpares e a quantidade existente\n");
        printf("9 - remover um valor da fila e colocar na fila\n");
        printf("0 - para voltar ao menu anterior\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("voltou\n");
            break;

            case 1 :
            printf ("ação 1 fila\n");
            break;

            case 2 :
            printf ("ação 2fila\n");
            break;

            case 3 :
            printf ("ação 3 fila\n");
            break;

            case 4 :
            printf ("ação 4 fila\n");
            break;

            case 5 :
            printf ("ação 5 fila\n");
            break;

            case 6 :
            printf ("ação 6 fila\n");
            break;

            case 7 :
            printf ("ação 7 fila\n");
            break;

            case 8 :
            printf ("ação 8 fila\n");
            break;

            case 9 :
            printf ("ação 9 fila\n");
            break;


            default :
            printf ("Valor invalido, tente novamente para gerenciar a fila!\n");
            printf("\n");
            break;
        }
    }
    
}

void acaoPilha() {

    int action;
    bool system = true;

    while (system)
    {
        
        printf("\n");
        printf("Qual ação de pilha deseja executar:\n");
        printf("1 - inserir elemento na pilha\n");
        printf("2 - remover elemento da pilha\n");
        printf("3 - consultar a quantidade de elementos na pilha  (usar a estrutura de controle)\n");
        printf("4 - mostrar e remover todos os elementos da pilha\n");
        printf("5 - consultar o maior valor da pilha\n");
        printf("6 - consultar o menor valor da pilha\n");
        printf("7 - consultar a media da pilha\n");
        printf("8 - relatório de valores pares e ímpares e a quantidade existente\n");
        printf("9 - remover um valor da pilha e colocar na fila\n");
        printf("0 - para voltar ao menu anterior\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("voltou\n");
            break;

            case 1 :
            printf ("ação 1 pilha\n");
            break;

            case 2 :
            printf ("ação 2 pilha\n");
            break;

            case 3 :
            printf ("ação 3 pilha\n");
            break;

            case 4 :
            printf ("ação 4 pilha\n");
            break;

            case 5 :
            printf ("ação 5 pilha\n");
            break;

            case 6 :
            printf ("ação 6 pilha\n");
            break;

            case 7 :
            printf ("ação 7 pilha\n");
            break;

            case 8 :
            printf ("ação 8 pilha\n");
            break;

            case 9 :
            printf ("ação 9 pilha\n");
            break;


            default :
            printf ("Valor invalido, tente novamente para gerenciar a pilha!\n");
            printf("\n");
            break;
        }
    }
    
}

void main() {

    int action;
    bool system = true;

    printf("::::::: GERENCIADOR DE FILAS E PILHAS :::::::\n");
    printf("\n");

    while (system)
    {
        printf ("Qual ação deseja executar: \n");
        printf("1 - Manipular uma fila \n2 - Manipular uma pilha \n0 - para sair\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("saiu\n");
            break;

            case 1 :
            acaoFila();
            break;

            case 2 :
            acaoPilha();
            break;

            default :
            printf ("Valor invalido, tente novamente!\n");
            printf("\n");
            break;
        }
    } 
}
