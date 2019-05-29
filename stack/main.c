#include <stdio.h>
#include <stdlib.h>
#include "tstack.h"

int main()
{
    tstack* stack;
    stack=NULL;
    char singlechar, answer, deletedData;
    int index, size;

    printf("Cuantas letras desea ingresar?: ");
    scanf("%d", &size);
    for(index = 0; index < size; index++) {
        printf("Ingrese una letra: ");
        scanf(" %c", &singlechar);
        push(&stack, singlechar);
    }
    printf("Pila: \n");
    show(stack);
    printf("Desea eliminar el ultimo elemento ingresado?: y/n ");
    scanf(" %c", &answer);
    if(answer=='y') {
        pop(&stack, &deletedData);
        printf("Se elimino la letra: ");
        printf("%c \n", deletedData);
        printf("Pila sin letra eliminada: \n");
        show(stack);
    }

    return 0;
}
