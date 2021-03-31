#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,j,N;
    scanf("%s",&str);
    N = strlen(str);
    int temp=0;
    char t;
    for(i=0;i<N;i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            t = str[i-1];
            while(str[i] >= '0' && str[i] <= '9')
            {
                temp = temp * 10 + (str[i]-48);
                i++;
            }
            for(j=0;j<temp;j++)
            {

                printf("%c",t);
            }
            temp = 0;
        }
    }

    return 0;
}
