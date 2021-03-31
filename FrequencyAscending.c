#include<stdio.h>

int main()
{
    int N,num,i,j;
    scanf("%d",&N);
    int arr[N],temp,count_arr[N],count=1;

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

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
        for(j=i+1;j<N;j++)
        {
            if(arr[j] == -1) continue;
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        count_arr[i] = count;
        count = 1;
    }

    for(i=0;i<N;i++)
    {
        if(count_arr[i] > 1)
            printf("%d ",count_arr[i]);
    }

    return 0;
}
