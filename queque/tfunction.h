#include "tstruct.h"

void init(Tqueue *tqueue){
    (*tqueue).first = NULL;
    (*tqueue).last = NULL;
}

int isFirstEmpty(Tqueue *tqueue){
    return (*tqueue).first == NULL;
}

void dequeue(Tqueue *queue, char *data){
    Tnode *aux;
    if (!isFirstEmpty(queue)) {
        *data = (*queue).first->data;
        aux = (*queue).first;
        (*queue).first = (*queue).first->next;
        free(aux);
    }
}

void enqueue(Tqueue *queue, char data){
    Tnode *tnode;
    tnode = malloc(sizeof(Tnode));
    tnode->data = data;
    tnode->next = NULL;
    if(isFirstEmpty(queue)) {
        (*queue).first = tnode;
        (*queue).last = tnode;
    } else {
        (*queue).last->next = tnode;
        (*queue).last = tnode;
    }
}


void show_recursive(Tqueue* queue)
{
    char data;
    if(!isFirstEmpty(queue)) {
        dequeue(queue, &data);
        show_recursive(queue);
        printf("%c\n", data);
        enqueue(queue, data);
    }
}
