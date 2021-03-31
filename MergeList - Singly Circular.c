#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int N,i;
    printf("Enter the size of List 1: ");
    scanf("%d",&N);

    struct Node *FirstHead, *SecondHead, *element, *Prev;
    FirstHead = NULL;

    for(i=0;i<N;i++)
    {
        element = (struct Node*) malloc(sizeof(struct Node));
        scanf("%d",&element->data);
        element->next = NULL;

        if(FirstHead == NULL)
            FirstHead = element;
        else
            Prev->next = element;
        Prev = element;
    }
    Prev->next = FirstHead;


    printf("Enter the size of List 2: ");
    scanf("%d",&N);

    SecondHead = NULL;

    for(i=0;i<N;i++)
    {
        element = (struct Node*) malloc(sizeof(struct Node));
        scanf("%d",&element->data);
        element->next = NULL;

        if(SecondHead == NULL)
            SecondHead = element;
        else
            Prev->next = element;
        Prev = element;
    }
    Prev->next = SecondHead;
    //printf("Before : \n");
    //PrintList(FirstHead);

    Merge(FirstHead, SecondHead);
    //printf("After :\n");
    //PrintList(FirstHead);
    Sort(FirstHead);
    PrintList(FirstHead);


    return 0;
}

void Sort(struct Node *List)
{
    struct Node *temp;
    struct Node *swap;
    struct Node *t;
    temp = List;

    while(temp->next != List)
    {
        t = temp->next;
        while(t != List)
        {
            if(temp->data > t->data)
            {
                swap = temp->data;
                temp->data = t->data;
                t->data = swap;
            }
            t = t->next;
        }
        temp=temp->next;
    }
}

void Merge(struct Node *L1, struct Node *L2)
{
    struct Node *t;
    struct Node *t1;
    t = L1;
    while(t->next != L1)
    {
        t = t->next;
    }
    t->next = L2;
    t1 = L2;
    while(t1->next != L2)
    {
        t1 = t1->next;
    }
    t1->next = L1;
    //PrintList(L1);
}

void PrintList(struct Node *Head)
{
    struct Node *temp;
    temp = Head;
    while(temp->next != Head)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
}
