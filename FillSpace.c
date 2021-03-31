#include<stdio.h>


int main()
{

    int row,col;
    scanf("%d %d",&row,&col);
    col= col+1;
    int arr[row][col],check_arr[row][col],i,j,k,counter=1,count=1,safe,fillCount=0,c_counter=1,c_count=1;
    int space,No_of_seats,c_fillCount=0;
    scanf("%d",&space);
    scanf("%d",&No_of_seats);
    int Broken[No_of_seats];

    for(i=0;i<No_of_seats;i++)
    {
        scanf("%d",&Broken[i]);
    }
    //Array
    for(i=0;i<row;i++)
    {
        if(counter==1)
        {
           for(j=0;j<col;j++)
            {
                if(j==space)
                {
                    arr[i][j] = 2;
                    continue;
                }

                arr[i][j] = count++;
            }
            counter = 0;
        }
        else
        {
            count = count + col-2;
            safe = count;
            for(j=0;j<col;j++)
            {
                if(j==space)
                {
                    arr[i][j] = 2;
                    continue;
                }

                arr[i][j] = count--;
            }
            counter = 1;
            count = safe+1;
        }
    }
    printf("\n");
    //Check Array

    for(i=0;i<row;i++)
    {
        if(c_counter==1)
        {
           for(j=0;j<col;j++)
            {
                if(j==space)
                {
                    check_arr[i][j] = 2;
                    continue;
                }

                check_arr[i][j] = c_count++;
            }
            c_counter = 0;
        }
        else
        {
            c_count = c_count + col-2;
            safe = c_count;
            for(j=0;j<col;j++)
            {
                if(j==space)
                {
                    check_arr[i][j] = 2;
                    continue;
                }

                check_arr[i][j] = c_count--;
            }
            c_counter = 1;
            c_count = safe+1;
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
    printf("\nCheck Array :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",check_arr[i][j]);
        }
        printf("\n");
    }



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
    // Check Array
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=0;k<No_of_seats;k++)
            {
                if(check_arr[i][j] == Broken[k])
                {
                    check_arr[i][j] = -1;
                }
            }
        }
    }
    printf("\n Broken Seats in arr : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n Broken Seats in c_arr : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",check_arr[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<row;i++)
    {
        if(counter==0)
        {
            for(j=0;j<col;j++)
            {
                arr[i][space] = 2;
                if(arr[i][j] == -1)
                {
                    //arr[i][j+1] = 1;
                    continue;
                }

                if(j%2==0)
                {
                    arr[i][j] = 1;

                }

                else
                    arr[i][j] = 0;
                    //arr[i][Space] = 2;
            }
            counter = 1;
        }
        else
        {
            for(j=0;j<col;j++)
            {
                arr[i][space] = 2;

                if(arr[i][j] == -1)
                {
                    //arr[i][j+1] = 1;
                    continue;
                }

                if(j%2!=0)
                {
                    arr[i][j] = 1;
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
            if(arr[i][j] == 2 && arr[i][j+1] != -1)
            {
                arr[i][j+1] = 1;
            }
        }
    }

    //Check Array

    for(i=0;i<row;i++)
    {
        if(c_counter==0)
        {
            for(j=0;j<col;j++)
            {
                check_arr[i][space] = 2;
                if(check_arr[i][j] == -1)
                    continue;

                if(j%2==0)
                {
                    check_arr[i][j] = 0;

                }

                else
                    check_arr[i][j] = 1;
            }
            c_counter = 1;
        }
        else
        {
            for(j=0;j<col;j++)
            {
                check_arr[i][space] = 2;

                if(check_arr[i][j] == -1)
                    continue;
                if(j%2!=0)
                {
                    check_arr[i][j] = 0;
                }

                else
                    check_arr[i][j] = 1;
            }
            c_counter = 0;
        }

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(check_arr[i][j] == 2 && check_arr[i][j+1] == 0)
            {
                check_arr[i][j+1] = 1;
            }
        }
    }


    printf("\nArray is : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    printf("\nCheck Array is : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",check_arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",check_arr[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j] == 1)
                fillCount++;
        }

    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(check_arr[i][j] == 1)
                c_fillCount++;
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j] == -1)
                arr[i][j] = 9;
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(check_arr[i][j] == -1)
                check_arr[i][j] = 9;
        }
    }
    printf("\n After filled 9 Array is :\n");


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("After filled 9 c_arr is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",check_arr[i][j]);
        }
        printf("\n");
    }


    if(fillCount>c_fillCount)
        printf("%d",fillCount);
    else
        printf("%d",c_fillCount);

    return 0;
}


