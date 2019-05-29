#include <stdio.h>
#include <stdlib.h>
#include "tfunction.h"

int main()
{
    Tqueue queue;
    char answer, singlechar, deletedData;
    int size, index;
    init(&queue);

    printf("Cuantas letras desea ingresar?: ");
    scanf("%d", &size);
    for(index = 0; index < size; index++) {
        printf("Ingrese una letra: ");
        scanf(" %c", &singlechar);
        enqueue(&queue, singlechar);
    }
    printf("Cola: \n");
    show(queue);

    printf("Desea eliminar el primer elemento ingresado?: y/n ");
    scanf(" %c", &answer);
    if(answer=='y') {
        dequeue(&queue, &deletedData);
        printf("Se elimino la letra: ");
        printf("%c \n", deletedData);
        printf("Cola despues de eliminarse un elemento: \n");
        show(queue);
    }
}
