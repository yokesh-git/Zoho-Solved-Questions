#include<stdio.h>

int FindMin(int N, int arr[N])
{
    int i,j,min;
    min = arr[0];

    for(i=0;i<N;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            arr[i] = ' ';
        }
    }
    printf("\n%d\n",min);
    return min;

}
int main()
{

    int N;
    scanf("%d",&N);
    int arr[N],i,j,temp,Oddcounter=0,Evencounter=0,OddArr[N],EvenArr[N];

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0;i<N;i++)
    {
        if(i%2==0)
            OddArr[Oddcounter++] = arr[i];
        else
            EvenArr[Evencounter++] = arr[i];
    }
    for(i=0;i<N/2;i++)
    {
        if(i%2==0)
        {
            int res = FindMin(N,OddArr);
            printf("%d ",res);
        }
        else
        {
            int res = FindMin(N,EvenArr);
            printf("%d ",res);
        }
    }

    return 0;
}


