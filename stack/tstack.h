
typedef struct stack
{
    char data;
    struct stack *next;
}tstack;

int isNotEmpty(tstack *stack)
{
    return stack!=NULL;
}

void push(tstack **stack, char data)
{
    tstack *auxiliar;
    auxiliar=malloc(sizeof(tstack));
    auxiliar->data=data;
    auxiliar->next=*stack;
    *stack=auxiliar;
}

void pop(tstack **stack, char *data)
{
    tstack *aux;
    if(isNotEmpty(*stack))
    {
        *data=(*stack)->data;
        aux=(*stack);
        (*stack)=aux->next;
        free(aux);
    }
    else
        printf("Pila vacia");
}

void show(tstack *stack)
{
    while(isNotEmpty(stack))
    {
        printf("%c\n",stack->data);
        stack = stack->next;
    }
}
