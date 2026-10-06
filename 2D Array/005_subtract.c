#include<stdio.h>
void main()
{
    int arr[3][3], brr[3][3], crr[3][3];
    int row,col;

    printf("enter elements of first matrix\n");
    for(row=0 ; row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n");

    printf("enter elements of secod matrix\n");
    for(row=0 ; row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            scanf("%d",&brr[row][col]);
        }
    }
    printf("\n");

    printf("elements of first matrix :\n");
    for(row=0 ; row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    printf("elements of second matrix :\n");
    for(row=0 ; row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            printf("%d\t",brr[row][col]);
        }
        printf("\n");
    }
    printf("\n");    

    for(row=0 ; row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            crr[row][col]=arr[row][col]-brr[row][col];
        }
    }
    printf("\n");   
    
    printf("subtraction of given two matrices\n");
    for(row=0 ; row<3 ; row++)
    {
        for(col=0 ; col<3 ; col++)
        {
            printf("%d\t",crr[row][col]);
        }
        printf("\n");
    }    
}