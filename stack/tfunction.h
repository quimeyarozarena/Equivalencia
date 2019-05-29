#include "tstack.h"

int isNotEmpty(tstack *p)
{
    return p!=NULL;
}

void push(tstack **s, char data)
{
    tstack *auxiliar;
    auxiliar=malloc(sizeof(tstack));
    auxiliar->data=data;
    auxiliar->next=*s;
    *s=auxiliar;
}

void pop(tstack **s, char *data)
{
    tstack *aux;

    if(*s!=NULL)
    {
        *data=(*s)->data;
        aux=*s;
        *s=aux->next;
        free(aux);
    }
    else
        printf("pila vacia");
}

void show(tstack *s)
{
    while(isNotEmpty(s))
    {
        printf("%c\n",s->data);
        s = s->next;
    }
}
