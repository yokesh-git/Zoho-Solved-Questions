#include<stdio.h>

int main()
{
    int N,K,t;
    scanf("%d",&N);
    scanf("%d",&K);
    int arr[N];
    int Tarr[K];
    int i,j=0,max,ind=0;
    t = K;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<N-K+1;i++)
    {
        j = i;

        while(t)
        {
            //printf("%d ",arr[j]);
            Tarr[ind] = arr[j];
            ind++;
            t--;
            j++;
        }
        t = K;
        //printf("\n");
        FindMax(Tarr,K);
        ind = 0;
    }

    return 0;
}

void FindMax(int arr[], int K)
{
    int max;
    max = arr[0];
    //printf("Initial max is %d",max);
    for(int i=0;i<K;i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    printf("%d ",max);
}
