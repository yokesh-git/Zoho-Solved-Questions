#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N],count[N],i,j,c;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        count[i] = 0;
    }

    for(i=0;i<N;i++)
    {
        c=1;
        for(j=i+1;j<N;j++)
        {
            if(arr[i] == arr[j])
            {
                c++;
                count[j] = 1;
                //printf("\nCounted %d at times %d to check %d",arr[i],c,count[j]);
            }

        }
        if(count[i] != 1)
        {
            count[i] = c;
        }
    }
    printf("\n\n");

    for(i=0;i<N;i++)
    {
        if(count[i] != 1)
            printf("\n%d->%d\n",arr[i],count[i]);
    }




    return 0;
}
