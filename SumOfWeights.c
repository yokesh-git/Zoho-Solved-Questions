#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N,i,j,temp,Wtemp;
    long long root;
    scanf("%d",&N);
    int arr[N],Warr[N];

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        Warr[i] = 0;
    }

    for(i=0;i<N;i++)
    {
        root = sqrt(arr[i]);

        if(root * root == arr[i])
        {
            Warr[i] += 5;
        }
        if(arr[i]%4==0 && arr[i]%6==0)
        {
            Warr[i] += 4;
        }
        if(arr[i] % 2 == 0)
        {
            Warr[i] += 3;
        }

    }

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(i==N-1)
                continue;
            if(Warr[i]>Warr[j])
            {
                Wtemp = Warr[i];
                Warr[i] = Warr[j];
                Warr[j] = Wtemp;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0;i<N;i++)
    {
        printf("<%d,%d>",arr[i],Warr[i]);
    }

    return 0;
}
