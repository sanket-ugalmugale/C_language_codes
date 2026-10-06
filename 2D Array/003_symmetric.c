#include <stdio.h>
void main ()
{
    int arr[3][3];
    int row , col, flag = 0;

    printf("enter elements of matrix\n");
    for(row = 0; row < 3 ; row++)
    {
        for(col=0 ; col < 3 ; col ++)
        {
            scanf("%d",&arr[row][col]);
        }
    }

    printf("elements of matrix\n");
    for(row = 0; row < 3 ; row++)
    {
        for(col=0 ; col < 3 ; col ++)
        {
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
    }

    for(row = 0; row < 3 ; row++)
    {
        for(col=0 ; col < 3 ; col ++)
        {
            if(arr[row][col] != arr[col][row])
            {
                printf("Given matrix is assymetric");
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }
    }

    if(flag == 0)
    {
        printf("given matrix is symetric");
    }
}