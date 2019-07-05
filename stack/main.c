#include <stdio.h>
#include <stdlib.h>
#include "tstack.h"

int main()
{
    tstack* stack;
    stack=NULL;
    char singlechar, answer, deletedData, continueInsert;

    do {
        printf("Ingrese una letra: ");
        scanf(" %c", &singlechar);
        push(&stack, singlechar);
        printf("Desea ingresar otra letra?: s/n \n");
        scanf(" %c", &continueInsert);
    } while (continueInsert == 's');

    printf("Pila: \n");
    show_recursive(stack);
    printf("Desea eliminar el ultimo elemento ingresado?: y/n ");
    scanf(" %c", &answer);
    if(answer=='y') {
        pop(&stack, &deletedData);
        printf("Se elimino la letra: ");
        printf("%c \n", deletedData);
        printf("Pila sin letra eliminada: \n");
        show_recursive(stack);
    }

    return 0;
}
