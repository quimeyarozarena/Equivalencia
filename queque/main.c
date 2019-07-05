#include <stdio.h>
#include <stdlib.h>
#include "tfunction.h"

int main()
{
    Tqueue queue;
    char answer, singlechar, deletedData, continueInsert;
    init(&queue);

    do {
        printf("Ingrese una letra: ");
        scanf(" %c", &singlechar);
        enqueue(&queue, singlechar);
        printf("Desea ingresar otra letra?: s/n \n");
        scanf(" %c", &continueInsert);
    } while (continueInsert == 's');

    printf("Cola: \n");
    show_recursive(&queue);

    printf("Desea eliminar el primer elemento de la cola?: y/n ");
    scanf(" %c", &answer);
    if(answer=='y') {
        dequeue(&queue, &deletedData);
        printf("Se elimino la letra: ");
        printf("%c \n", deletedData);
        printf("Cola despues de eliminarse un elemento: \n");
        show_recursive(&queue);
    }
}
