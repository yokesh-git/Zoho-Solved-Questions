#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *Head;


void insert(int n)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->next = Head;
    Head = newNode;
}

int findLoop(struct Node *Head)
{
    struct Node *p1, *p2;
    p1 = p2 = Head;

    while(p1 && p2 && p2->next)
    {
        p1 = p1->next;
        p2 = p2->next->next;

        if(p1 == p2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    Head = NULL;
    insert(7);
    insert(14);
    insert(21);
    insert(7);

    Head->next->next->next->next = Head->next;
    int res = findLoop(Head);
    if(res)
        printf("True");
    else
        printf("False");
    return 0;
}
