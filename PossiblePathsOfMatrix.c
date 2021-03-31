#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    row = row - 1;
    col = col - 1;
    int result = Factorial(row + col)/(Factorial(row) * Factorial(col));
    printf("%d",result);

    return 0;
}

int Factorial(int N)
{
    int fact = 1;

    while(N)
    {
        fact = fact * N;
        N--;
    }
    return fact;
}
