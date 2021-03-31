#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N],i,j,temp;

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
    //printf("Sorted \n");


    // 1 2 3 4 5 1 2 3 4
    // 1 1 2 2 3 3 4 4 5
    // 1 2 1 2 3 3 4 4 5
    // 1 2 3 2 1 3 4 4 5
    // 1 2 3 4 1 3 2 4 5
    // 1 2 3 4 5 3 2 4 1
    // 1 2 3 4 5
    int counter=0;
    int safe;
    for(i=0;i<N;i++)
    {
        if(i%2==0)
        {
            safe = arr[counter];
            arr[counter++] = arr[i];
            arr[i] = safe;
        }

    }

    for(i=counter;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(arr[i]<arr[j])
            {
                //printf("\n %d \n",i);
                safe = arr[i];
                arr[i] = arr[j];
                arr[j] = safe;
            }
        }

    }
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
    return 0;
}
