#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,j;
    scanf("%s",&str);
    //printf("%s",str);

    for(i=0;i<strlen(str);i++)
    {
        for(j=0;j<strlen(str);j++)
        {
            if((i==j) || i+j==strlen(str)-1)
                printf("%c",str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
