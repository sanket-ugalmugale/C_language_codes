#include<stdio.h>
void main()
{
    int arr[3][3], brr[3][3];
    int row , col , flag=0;

    printf("enter matrix elements\n");
    for(row=0; row < 3 ; row ++)
    {
        for ( col = 0 ; col < 3 ; col ++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n");

    printf("Matrix elements are\n");
    for(row=0; row < 3 ; row ++)
    {
        for ( col = 0 ; col < 3 ; col ++)
        {
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    for(row = 0 ; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            brr[col][row]=arr[row][col];
        }
    }

    printf("Transpose of given matrix is \n");
    for(row = 0 ; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            printf("%d\t",brr[row][col]);
        }
        printf("\n");
    }

}