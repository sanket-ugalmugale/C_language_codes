#include<stdio.h>
void main ()
{
    int arr[3][3];
    int row, col, search, flag = 0;

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
    printf("\n");

    printf("enter element which you want to search\n");
    scanf("%d",&search);
    for (row = 0; row < 3; row++)
    {
        for ( col = 0; col < 3; col++)
        {
            if(search == arr[row][col])
            {
                printf("%d is found in matrix",search);
                flag=1;
                break;
            }
        } 
        if(flag == 1)
        {
            break;
        } 
    }
    if (flag == 0)
    {
        printf("Entered number is not in given matrrix");
    }
    

    
}
