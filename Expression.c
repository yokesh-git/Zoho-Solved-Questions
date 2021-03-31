#include<stdio.h>

int main()
{
    char str[100];
    char c;
    int count = 0,i,Num_Arr[100];
    char Sym_Arr[100];
    while(scanf("%c",&c))
    {
        str[count++] = c;
        if (c == '\n') break;
    }
    int length = count-1;
    //printf("String - %s\nLength - %d ",str,count-1);
    int ind = 0;
    for(i=0;i<length;i++)
    {
        if(str[i] == ' ')
            break;
        Num_Arr[ind] = str[i]-48;
        ind++;
    }

    int ind1 = 0;
    for(i=ind;i<length;i++)
    {
        if(str[i] == ' ')
            continue;
        //printf("\nAppending %c",str[i]);
        Sym_Arr[ind1] = str[i];
        //printf("%c ",Sym_Arr[ind1]);
        ind1++;
    }
    int t = Num_Arr[0];
    int t1 = Num_Arr[1];
    int Ans[100];
    if(Sym_Arr[0] == '+')
        Ans[0] = t + t1;

    if(Sym_Arr[0] == '-')
        Ans[0] = t - t1;

    if(Sym_Arr[0] == '*')
        Ans[0] = t * t1;

    if(Sym_Arr[0] == '/')
        Ans[0] = t / t1;

    int j=1;
    for(i=2;i<ind;i++)
    {
        //printf("\n %d %c\n",Num_Arr[i],Sym_Arr[j]);

        if(Sym_Arr[j] == '+')
        {
            Ans[0] = Ans[0] + Num_Arr[i];
        }

        if(Sym_Arr[j] == '-')
        {
            Ans[0] = Ans[0] - Num_Arr[i];
        }

        if(Sym_Arr[j] == '*')
        {
            Ans[0] = Ans[0] * Num_Arr[i];
        }

        if(Sym_Arr[j] == '/')
        {
            Ans[0] = Ans[0] / Num_Arr[i];
        }

        j++;
    }
    printf("Ans is %d",Ans[0]);

    return 0;
}
