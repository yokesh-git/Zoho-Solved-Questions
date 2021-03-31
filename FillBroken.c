#include<stdio.h>

int main()
{

    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col],i,j,k,counter=1,count=1,safe,fillCount=0;
    int No_of_seats;
    scanf("%d",&No_of_seats);
    int Broken[No_of_seats];

    for(i=0;i<No_of_seats;i++)
    {
        scanf("%d",&Broken[i]);
    }

    for(i=0;i<row;i++)
    {
        if(counter==1)
        {
           for(j=0;j<col;j++)
            {
                arr[i][j] = count++;
            }
            counter = 0;
        }
        else
        {
            count = count + col-1;
            safe = count;
            for(j=0;j<col;j++)
            {
                arr[i][j] = count--;
            }
            counter = 1;
            count = safe+1;
        }
    }
    /*for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=0;k<No_of_seats;k++)
            {
                if(arr[i][j] == Broken[k])
                {
                    arr[i][j] = -1;
                }
            }
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

    for(i=0;i<row;i++)
    {
        if(counter==0)
        {
            for(j=0;j<col;j++)
            {
                if(arr[i][j] == -1)
                    continue;
                if(j%2==0)
                {
                    arr[i][j] = 1;
                    fillCount++;
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
                if(arr[i][j] == -1)
                    continue;
                if(j%2!=0)
                {
                    arr[i][j] = 1;
                    fillCount++;
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

    printf("\n%d",fillCount);

    return 0;
}

