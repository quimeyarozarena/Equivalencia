#include <stdio.h>
#include <stdlib.h>
#include "tfunction.h"

int main()
{
    Tqueue queue;
    init(&queue);
    char answer, singlechar, deletedData, continueInsert;

    do {
        printf("Ingrese una letra: ");
        scanf(" %c", &singlechar);
        enqueue(&queue, singlechar);
        printf("Desea ingresar otra letra?: s/n \n");
        scanf(" %c", &continueInsert);
    } while (continueInsert == 's');

    printf("Cola: \n");
    show_recursive(&queue);

    printf("Desea eliminar el primer elemento de la cola?: s/n ");
    scanf(" %c", &answer);
    if(answer=='s') {
        dequeue(&queue, &deletedData);
        printf("Se elimino la letra: ");
        printf("%c \n", deletedData);
        printf("Cola despues de eliminarse un elemento: \n");
        show_recursive(&queue);
    }
}
