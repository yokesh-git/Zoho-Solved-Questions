#include<stdio.h>
//void PrintMat(int);
//void Rotate(int arr[][],int N);
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N][N];
    int i,j,temp;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Clockwise\n");
    CRotate(N,arr);
    PrintMat(N,arr);
    ARotate(N,arr);
    ARotate(N,arr);
    printf("Anti-clockwise\n");
    PrintMat(N,arr);

    return 0;
}
void CRotate(int N, int arr[][N])
{

    int i,j,temp;
    for(i=0;i<N/2;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[N-i-1][i];
            arr[N-i-1][i] = arr[N-i-1][N-j-1];
            arr[N-i-1][N-j-1] = arr[j][N-i-1];
            arr[j][N-i-1] = temp;
        }
    }
}
void ARotate(int N, int arr[][N])
{
    int i,j,temp;

    for(i=0;i<N/2;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][N-i-1];
            arr[j][N-i-1] = arr[N-i-1][N-j-1];
            arr[N-i-1][N-j-1] = arr[N-j-1][i];
            arr[N-j-1][i] = temp;
        }
    }

}
void PrintMat(int N, int arr[][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
