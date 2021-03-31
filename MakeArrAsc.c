#include<stdio.h>
int main()
{
    int N;
    printf("Enter Arr Size :");
    scanf("%d",&N);
    int arr[N],i,j,count=0,missing;

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<=i+1;j++)
        {
            //if(i==N-1) continue;      // 1 2 3 2
            //printf("\n%d %d\n",arr[i],arr[j]);
            if(arr[i] < arr[j])
            {
                //printf("\nSkipped\n");
                //printf("\n%d %d\n",arr[i],arr[j]);
                continue;
            }
            else
            {
                //printf("\nCounted\n");
                printf("%d ",arr[i]);
                missing = i+1;
                count++;
            }
        }
    }

    if(count==N-1)
        printf("\ncount is %d",count);
    else
    {
        printf("%d ",arr[missing]);
        printf("\nCount is %d",count+1);
    }

    return 0;
}
