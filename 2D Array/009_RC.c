#include<stdio.h>
void main ()
{
    int arr[100][100];
    int R, C, row, col;

    printf("Enter the number of rows you want : ");
    scanf("%d",&R);

    printf("Enter the number of rows you want : ");
    scanf("%d",&C);

    printf("enter array elements\n");
    for (row = 0; row < R; row++)
    {
        for (col = 0; col < C; col++)
        {
            scanf("%d",&arr[row][col]);
        }        
    }

    printf("Array elements are\n");
    for (row = 0; row < R; row++)
    {
        for ( col = 0; col < C; col++)
        {
            printf("%d\t",arr[row][col]);
        }  
        printf("\n");      
    }
    
}