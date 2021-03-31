#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    printf("Enter the array size : ");
    scanf("%d",&N);
    int arr[N],i,Selected_Item=0,sum=0,count=0,sel;

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];        // 1 2 3
    }
    Selected_Item = sum/N;
    sel = arr[Selected_Item-1];
    //printf("\nSelected %d ",Selected_Item);

    for(i=0;i<N;i++)
    {
        if(arr[i] == sel)
            continue;
        count = count + abs((sel - arr[i]));
    }
    printf("%d",count);


    return 0;
}
