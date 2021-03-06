#include<stdio.h>
#include<stdbool.h>
#include "fila.h"
#include "pilha.h"

//funcao para inserir elementos
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
        int posicao = 0, maior = 0, menor = fila->item[fila->inicio];

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
        int posicao = 0, maior = fila->item[fila->inicio];

        while(posicao < fila->total){
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

void consultaParEImpares(Fila fila) {
    if (!filaVazia(fila)) {
        
        int posicao = 0, pares = 0, impares = 0;
        
        while(posicao < fila->total){
            if (fila->item[posicao] % 2 == 0) {
                printf("O numero %d eh par\n", fila->item[posicao]);
                pares++;
            } else {
                printf("O numero %d eh impar\n", fila->item[posicao]);
                impares++;
            }          
            posicao++;            
        }

        printf("Quantidade de numeros pares: %d\n", pares);
        printf("Quantidade de numeros impares: %d\n", impares);
    } else {
        printf("Filha vazia!");
    }
    
}

void removeValorDaFilaEAdiciona(Fila fila, Pilha pilha) {
    if (!filaVazia(fila)) {
        empilha(desenfileira(fila), pilha);
    } else {
        printf("Fila vazia!\n");
    }
}

void acaoFila(Fila fila, Pilha pilha) {

    int action;
    bool system = true;

    while (system)
    {

        printf("\n");
        printf("Qual a????o de fila deseja executar:\n");
        printf("1 - inserir elemento na fila\n");
        printf("2 - remover elemento da fila\n");
        printf("3 - consultar a quantidade de elementos na fila (usar a estrutura de controle)\n");
        printf("4 - mostrar e remover todos os elementos da fila\n");
        printf("5 - consultar o maior valor da fila\n");
        printf("6 - consultar o menor valor da fila\n");
        printf("7 - consultar a media da fila\n");
        printf("8 - relat??rio de valores pares e ??mpares e a quantidade existente\n");
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
            consultaParEImpares(fila);
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

void insereElementosNaPilha(Pilha pilha) {

    printf("PILHA DE NUMEROS\n");
    do{
        int num;

        printf("Informe o valor a ser inserido na pilha:\n");
        scanf("%d", &num);

        empilha(num,pilha);
    } while(!pilhaCheia(pilha));
    
}

void removeElementoPilha(Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        printf("Elemento desempilhado: %d\n", desempilha(pilha));
    } else {
        printf("Pilha vazia!\n");
    }
}

void consultaTotalElementosPilha(Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        printf("Total de elementos na pilha: %d\n", pilha->topo + 1);
    } else {
        printf("Pilha vazia!\n");
    }
}

void consultaERemoveElementosPilha(Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        printf("Valores removidos da pilha:\n");

        while(!pilhaVazia(pilha)) printf("%d\n", desempilha(pilha));
    } else {
        printf("Pilha vazia!\n");
    }   
}

void consultaMaiorElementoPilha(Pilha pilha){
    if (!pilhaVazia(pilha)) {
        int posicao = 0, maior = pilha->item[pilha->topo];

        while(posicao < pilha->max){
            if(pilha->item[posicao] > maior){
                maior = pilha->item[posicao];
            }
            posicao++;
        }

        printf("O maior valor eh: %d\n", maior);
    } else {
        printf("Pilha vazia!\n");
    }
    
}

void consultaMenorPilha(Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        int posicao = 0, menor = pilha->item[pilha->topo];

        while(posicao < pilha->max){
            if(pilha->item[posicao] < menor){
                menor = pilha->item[posicao];
            }
            posicao++;
        }

        printf("O menor valor eh: %d\n", menor);
    } else {
        printf("Pilha vazia!!\n");
    }
}

void consultaMediaPilha(Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        int posicao =0, soma=0, qtdeElem = 0;
        float media;

        while(posicao < pilha->max){
            soma+= pilha->item[posicao];
            qtdeElem++;
            posicao++;
        }
        
        media =(soma/(float) qtdeElem);
        printf("A media eh: %.2f\n", media);
    } else {
        printf("Pilha vazia!!\n");
    }
}

void consultaParImparPilha(Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        int posicao = 0, pares = 0, impares = 0;
        
        while(posicao < pilha->max){
            if (pilha->item[posicao] % 2 == 0) {
                printf("O numero %d eh par\n", pilha->item[posicao]);
                pares++;
            } else {
                printf("O numero %d eh impar\n", pilha->item[posicao]);
                impares++;
            }          
            posicao++;            
        }

        printf("Quantidade de numeros pares: %d\n", pares);
        printf("Quantidade de numeros impares: %d\n", impares);
    } else {
        printf("Pilha vazia!!\n");
    }

}

void removeValorDaPilhaEAdiciona(Fila fila, Pilha pilha) {
    if (!pilhaVazia(pilha)) {
        enfileira(desempilha(pilha), fila);

    } else {
        printf("Pilha vazia!\n");
    }
}

void acaoPilha(Fila fila, Pilha pilha) {

    int action;
    bool system = true;

    while (system)
    {

        printf("\n");
        printf("Qual a????o de pilha deseja executar:\n");
        printf("1 - inserir elemento na pilha\n");
        printf("2 - remover elemento da pilha\n");
        printf("3 - consultar a quantidade de elementos na pilha  (usar a estrutura de controle)\n");
        printf("4 - mostrar e remover todos os elementos da pilha\n");
        printf("5 - consultar o maior valor da pilha\n");
        printf("6 - consultar o menor valor da pilha\n");
        printf("7 - consultar a media da pilha\n");
        printf("8 - relat??rio de valores pares e ??mpares e a quantidade existente\n");
        printf("9 - remover um valor da pilha e colocar na fila\n");
        printf("0 - para voltar ao menu anterior\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("voltou\n");
            break;

            case 1 :
            insereElementosNaPilha(pilha);
            break;

            case 2 :
            removeElementoPilha(pilha);
            break;

            case 3 :
            consultaTotalElementosPilha(pilha);
            break;

            case 4 :
            consultaERemoveElementosPilha(pilha);
            break;

            case 5 :
            consultaMaiorElementoPilha(pilha);
            break;

            case 6 :
            consultaMenorPilha(pilha);
            break;

            case 7 :
            consultaMediaPilha(pilha);
            break;

            case 8 :
            consultaParImparPilha(pilha);
            break;

            case 9 :
            removeValorDaPilhaEAdiciona(fila, pilha);
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
    Fila fila = inicializaFila(3);
    Pilha pilha = inicializaPilha(3);

    printf("::::::: GERENCIADOR DE FILAS E PILHAS :::::::\n");
    printf("\n");

    while (system)
    {
        printf ("Qual a????o deseja executar: \n");
        printf("1 - Manipular uma fila \n2 - Manipular uma pilha \n0 - para sair\n");
        scanf("%d", &action);

        switch (action) {
            case 0 :
            system = false;
            printf ("saiu\n");
            break;

            case 1 :
            acaoFila(fila, pilha);
            break;

            case 2 :
            acaoPilha(fila, pilha);
            break;

            default :
            printf ("Valor invalido, tente novamente!\n");
            printf("\n");
            break;
        }
    }
}
