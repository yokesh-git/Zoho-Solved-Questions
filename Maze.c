#include<stdio.h>
int findPath(int N, int arr[][N]);
int Solve(int x, int y, int N,int arr[][N]);
int Valid(int x, int y, int N, int arr[][N]);
int count=0;

int findPath(int N, int arr[][N])
{
    if(Solve(0,0,N,arr) == 0)
    {
        printf("No path");
        return 0;
    }
    //countPath();
    count++;
    return 1;
}

int Solve(int x, int y, int N, int arr[][N])
{

    if(x==N-1 && y==N-1)
    {
        count++;
        return 1;
    }
    if(Valid(x,y,N,arr) == 1)
    {
        if(Solve(x+1,y,N,arr) == 1)
            return 1;
        if(Solve(x,y+1,N,arr) == 1)
        {
            return 1;
        }
        return 0;
    }
    return 0;
}
int Valid(int x, int y, int N, int arr[][N])
{
    if(x>0 && x>N && y>0 && y<N && arr[x][y] == 1)
        return 1;
    return 0;
}
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N][N];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    findPath(N,arr);
    printf("\n%d",count);

    return 0;
}
