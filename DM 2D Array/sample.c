#include<stdio.h>
#include<stdlib.h>
void main()
{
    int** ptr = NULL;
    int i,j;

    ptr=(int**) malloc (3 * sizeof(int*));

    for ( i = 0; i < 3; i++)
    {
        *(ptr + i) = (int*) malloc (3 * sizeof(int));
    }

    printf("Enter array elements\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",*(ptr+i)+j);
        }        
    }
    printf("\n");

    printf("Array elements are\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",*(*(ptr+i)+j));
        }    
        printf("\n");    
    }
    
    


}