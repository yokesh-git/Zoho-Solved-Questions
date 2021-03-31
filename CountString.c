#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int length = strlen(str);
    int words=0,tabs=0,spaces=0,letters=0;

    for(int i=0;i<length;i++)
    {
        if(str[i] == ' ')
        {
            words++;
            spaces++;
        }
        else if(str[i] == '\t')
        {
            tabs++;
        }
        else
        {
            letters++;
        }
    }
    printf("Words : %d\nSpaces : %d\nTabs : %d\nLetters : %d",words+1,spaces,tabs,letters);

    return 0;
}
