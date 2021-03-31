#include<stdio.h>

int main()
{
    int N,i,j,k,v1=1,v2=1;
    scanf("%d",&N);
    //int k = N;

    for(i=0;i<N;i++)
    {
        for(j=N-1;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=v1;k++)
        {
            printf("%d",abs(k-v2));
        }
        v1+=2;
        v2++;

        printf("\n");
    }
    /*
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
    */
    return 0;
}
