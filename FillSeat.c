#include<stdio.h>


int main()
{

    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col],i,j,counter=0,count=0;

    for(i=0;i<row;i++)
    {
        if(counter==0)
        {
            for(j=0;j<col;j++)
            {
                if(j%2==0)
                {
                    arr[i][j] = 1;
                    count++;
                }

                else
                    arr[i][j] = 0;
            }
            counter = 1;
        }
        else
        {
            for(j=0;j<col;j++)
            {
                if(j%2!=0)
                {
                    arr[i][j] = 1;
                    count++;
                }

                else
                    arr[i][j] = 0;
            }
            counter = 0;
        }

    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n%d",count);

    return 0;
}
