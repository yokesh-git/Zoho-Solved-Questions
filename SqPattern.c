#include<stdio.h>

int main()
{

    int N;
    scanf("%d",&N);
    int i,j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==0 || j == N-1 || i == N-1)
                printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}
