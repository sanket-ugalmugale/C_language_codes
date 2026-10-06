#include<stdio.h>
void main ()
{
    int arr[3][3];
    int row, col;

    printf("enter array elements\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d",&arr[row][col]);
        }        
    }

    printf("Array elements are\n");
    for (row = 0; row < 3; row++)
    {
        for ( col = 0; col < 3; col++)
        {
            printf("%d\t",arr[row][col]);
        }  
        printf("\n");      
    }
    
}
