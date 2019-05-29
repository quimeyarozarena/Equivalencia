typedef struct node{
    char data;
    struct node *next;
} Tnode;

typedef struct queue{
    Tnode *first;
    Tnode *last;
} Tqueue;
