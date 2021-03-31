#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char arr[1000];
int top = 0;
void push(char a)
{
    arr[top] = a;
    top++;
}
char pop()
{
    return (arr[--top]);
}

int main()
{
    char *str,temp;
    str = (char*)malloc(1000);
    scanf("%s",&str);

    while(*str)
    {
        if(*str == '(' || *str == '{' || *str == '[')
        {
            push(*str);
        }
        else
        {
            temp = pop();
            if(!(*str ==')' && temp == '(') && !(*str ==']' && temp == '[') && !(*str =='}' && temp=='{'))
            {
                break;
            }
        }
        str++;
    }
    if(!*str)
        printf("true");
    else
        printf("false");

    return 0;
}
