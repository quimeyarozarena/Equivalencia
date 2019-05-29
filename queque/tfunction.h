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
    if (!isFirstEmpty(*queue)) {
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
    if(isFirstEmpty(*queue)) {
        (*queue).first = tnode;
        (*queue).last = tnode;
    } else {
        (*queue).last->next = tnode;
        (*queue).last = tnode;
    }
}

void show(Tqueue queue)
{
    while(!isFirstEmpty(queue))
    {
        printf("%c\n",(queue).first->data);
        (queue).first = (queue).first->next;
    }
}


