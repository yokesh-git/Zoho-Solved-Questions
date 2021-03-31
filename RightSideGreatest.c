#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N],i,j,max;

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<N;i++)
    {
        max = arr[i];
        for(j=i+1;j<N;j++)
        {
            if(arr[i]<arr[j])
            {
                max = arr[j];
            }
        }
        arr[i-1] = max;
    }
    arr[N-1] = -1;

    for(i=0;i<N;i++)
        printf("%d ",arr[i]);

    return 0;
}
