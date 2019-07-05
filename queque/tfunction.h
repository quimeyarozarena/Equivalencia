#include "tstruct.h"

void init(Tqueue *c){
    (*c).first = NULL;
    (*c).last = NULL;
}

int isFirstEmpty(Tqueue tqueue){
    return tqueue.first == NULL;
}

void dequeue(Tqueue *queue, char *data){
    Tnode *aux;
    if ((*queue).first != NULL) {
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
    if((*queue).first == NULL) {
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
    if((*queue).first != NULL) {
        dequeue(queue, &data);
        show_recursive(queue);
        printf("%c\n", data);
        enqueue(queue, data);
    }
}


void show(Tqueue queue)
{
    char letra;

    while(!isFirstEmpty(queue)) {
        dequeue(&queue, &letra);
        printf("%c", letra);
    }
}
