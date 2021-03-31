#include<stdio.h>
#include<string.h>

int main()
{

    /*char str[100][100] = {{'w','e','l','c','o'},
                        {'m','e','t','o','o'},
                        {'o','h','o','c','o'},
                        {'r','p','o','r','a'},
                        {'t','i','o','n'}};*/
                        //WELCOMETOOZHOCORPORATION
    char str[100];
    scanf("%s",&str);
    char SearchString[2] = "TOO";
    int i,j,c=0;
    int size = strlen(str);
    char arr[5][5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j] = str[c];
            c++;
        }
    }

    Right_to_Left(arr,SearchString);

    return 0;
}

void Right_to_Left(char arr[5][5], char SearchString[])
{
    int i,j;
    int start_i,start_j,stop_i,stop_j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j] == SearchString[0])
            {
                printf("\n Found %c at %d,%d\n",SearchString[0],i,j);
                start_i = i;
                start_j = j;
                int length = strlen(SearchString)-1;

                    if(arr[i][j+1] == SearchString[1])
                    {
                        printf("\n Found %c at %d,%d\n",SearchString[1],i,j+2);
                        if(arr[i][j+2] == SearchString[2])
                        {
                            printf("\n Found second %c at %d,%d\n",SearchString[2],i,j+2);
                            stop_i = i;
                            stop_j = j+2;
                            break;
                        }
                    }
                    length--;
                    //break;

                //break;
            }

        }
        //break;
    }

    printf("%d %d %d %d",start_i,start_j,stop_i,stop_j);
}
