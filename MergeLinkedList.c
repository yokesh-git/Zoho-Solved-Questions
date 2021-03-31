#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};
int main()
{
    struct Node *element,*FirstHead, *SecondHead, *Prev;
    int N,i;
    printf("Enter Size of List 1 :");
    scanf("%d",&N);
    FirstHead = NULL;
    for(i=0;i<N;i++)
    {
        element = (struct Node*) malloc(sizeof(struct Node));

        scanf("%d",&element->data);
        element->next = NULL;

        if(FirstHead == NULL)
        {
            FirstHead = element;
        }
        else
        {
            Prev->next = element;
        }
        Prev = element;

    }


    printf("Enter Size of List 2 :");
    scanf("%d",&N);
    SecondHead = NULL;
    for(i=0;i<N;i++)
    {
        element = (struct Node*) malloc(sizeof(struct Node));

        scanf("%d",&element->data);
        element->next = NULL;

        if(SecondHead == NULL)
        {
            SecondHead = element;
        }
        else
        {
            Prev->next = element;
        }
        Prev = element;

    }

    //1 2 5 2
    //1 1 5

    //1 2 5 2 1 1 5

    Merge(FirstHead, SecondHead);
    printf("After Merging :\n");
    PrintList(FirstHead);
    printf("\n");
    //PrintList(SecondHead);

    printf("\n");

    sort(FirstHead);

    printf("\n");

    printf("Final Result :\n");

    PrintList(FirstHead);

    return 0;
}

void Merge(struct Node *L1, struct Node *L2)
{

    while(L1->next != NULL)
    {
        L1 = L1->next;
    }
    L1->next = L2;

}

void sort(struct Node *Head)
{
    struct Node *temp;
    struct Node *dummy;

    while(Head != NULL)
    {
        dummy = Head->next;
        while(dummy != NULL)
        {
            if(Head->data > dummy->data)
            {
                temp = Head->data;
                Head->data = dummy->data;
                dummy->data = temp;
            }
            dummy = dummy->next;

        }

        Head = Head->next;
    }
}

void PrintList(struct Node *Head)
{
    while(Head != NULL)
    {
        printf("%d ",Head->data);
        Head = Head->next;
    }
}
