#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int arr[row][col],i,j,start_i,start_j,New_color;
    scanf("%d %d",&start_i,&start_j);

    scanf("%d",&New_color);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    arr[start_i][start_j] = New_color;
    for(i=start_i;i<row;i++)
    {
        for(j=start_j;j<col;j++)
        {
            if(arr[start_i][start_j-1] == 1)
            {
                arr[start_i][start_j-1] = New_color;
            }
            if(arr[start_i][start_j+1] == 1)
            {
                arr[start_i][start_j+1] = New_color;
            }
            if(arr[start_i-1][start_j] == 1)
            {
                arr[start_i-1][start_j] = New_color;
            }
            if(arr[start_i+1][start_j] == 1)
            {
                arr[start_i+1][start_j] = New_color;
            }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j] == New_color)
            {
                //printf("\n New found at %d,%d",i,j);
                if(arr[i][j-1] == 1)
                {
                    arr[i][j-1] = New_color;
                }
                if(arr[i][j+1] == 1)
                {
                    arr[i][j+1] = New_color;
                }
                if(arr[i-1][j] == 1)
                {
                    arr[i-1][j] = New_color;
                }
                if(arr[i+1][j] == 1)
                {
                    arr[start_i+1][j] = New_color;
                }
            }
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
