#include<stdio.h>
void main()
{
    int arr[3][3];
    int row , col, flag=0;

    printf("enter matrix elements\n");

    for (row = 0 ; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            scanf("%d",&arr[row][col]);
        }
    }

    printf("\n");

    printf("matrix elements\n");

    for (row = 0 ; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (row < col)
            {
                if (arr[row][col] != 0)
                {
                    printf("given matrix is not lower triangular matrix\n");
                    flag = 1;
                    break;
                }
            }
            
        }
        if (flag == 1)
        {
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("Given matrix is lower triangular\n");
    }
    
}