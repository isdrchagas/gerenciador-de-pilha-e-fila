#include<stdio.h>
#include<stdbool.h>
#include "fila.h"
#include "pilha.h"


void insereElementosNaFila(Fila fila) {

    printf("FILA DE NUMEROS\n");
    do{
        int num;

        printf("Informe o valor a ser inserido na fila:\n");
        scanf("%d", &num);

        enfileira(num, fila);
    } while(!filaCheia(fila));

}

void removeElementoFila(Fila fila){
    if (!filaVazia(fila)) {
        printf("Elemento desenfileirado: %d\n", desenfileira(fila));
    } else {
        printf("Fila vazia!!\n");
    }
}

void consultaTotal(Fila fila) {
    if (!filaVazia(fila)) {
        printf("Total de elementos: %d", fila->total);
    } else {
        printf("Fila vazia!!\n");
    }
    
}   

void mostraERemove(Fila fila) {
    if (!filaVazia(fila)) {
        printf("Valores removidos da fila:\n");

        while(!filaVazia(fila)) printf("%d\n", desenfileira(fila));
    } else {
        printf("Fila vazia!!\n");
    }
}

void consultaMenor(Fila fila) {
    if (!filaVazia(fila)) {
        int posicao = 0, maior = 0, menor = 0;
        menor = fila->item[fila->inicio];

        while(posicao < fila->final){
        
            if(fila->item[posicao] < menor){
                menor = fila->item[posicao];
            }
            posicao++; 
        }

        printf("O menor valor eh: %d\n", menor);
    } else {
        printf("Fila vazia!!\n");
    }
}

void consultaMaior(Fila fila) {

    if (!filaVazia(fila)) {
        int posicao = 0, maior=0;
        maior = fila->item[fila->inicio];

        while(posicao < fila->final){
            if(fila->item[posicao] > maior){
                maior = fila->item[posicao];
            } 
            posicao++;
        }

        printf("O maior valor eh: %d\n", maior);
    } else {
        printf("Fila vazia!!\n");
    }
}

void consultaMedia(Fila fila) {
     if (!filaVazia(fila)) {

        int posicao, soma=0, qtdeElem = 0;
        float media;
        
        posicao=fila->inicio;
        while(posicao < fila->final){
            soma += fila->item[posicao];
            qtdeElem++;
            posicao++;
        }

        media =(float) (soma/qtdeElem);
        printf("A media eh: %.2f\n", media);
    } else {
        printf("Fila vazia!!\n");
    }
}
    
void removeValorDaFilaEAdiciona(Fila fila, Pilha pilha) {
    if (!filaVazia(fila)) {
        empilha(desenfileira(fila), pilha);

        printf("Elemento inserido na pilha:\n");
        printf("%d", desempilha(pilha));
    } else {
        printf("Fila vazia!\n");
    }
}

void acaoFila() {

    int action;
    bool system = true;
    Fila fila = inicializaFila(3);
    Pilha pilha = inicializaPilha(3);

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
        printf("9 - remover um valor da fila e colocar na pilha\n");
        printf("0 - para voltar ao menu anterior\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("voltou\n");
            break;

            case 1 :
            insereElementosNaFila(fila);
            break;

            case 2 :
            removeElementoFila(fila);
            break;

            case 3 :
            consultaTotal(fila);
            break;

            case 4 :
            mostraERemove(fila);
            break;

            case 5 :
            consultaMaior(fila);
            break;

            case 6 :
            consultaMenor(fila);
            break;

            case 7 :
            consultaMedia(fila);
            break;

            case 8 :
            printf ("ação 8 fila\n");
            break;

            case 9 :
            removeValorDaFilaEAdiciona(fila, pilha);
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
