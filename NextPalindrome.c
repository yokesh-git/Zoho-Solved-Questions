#include<stdio.h>

int main()
{
    int N,temp,ans=0,c,i;
    scanf("%d",&N);
    int K = N;
    for(i=K+1;i>0;i++)
    {
        c = i;
        //printf("\n check number is %d %d",i,c);
        while(c)
        {
            temp = c % 10;
            c = c/10;
            ans = ans * 10 + temp;
        }

        if(ans == i)
        {
            printf("%d",ans);
            break;
        }

        else
            ans = 0;

    }
    return 0;
}
