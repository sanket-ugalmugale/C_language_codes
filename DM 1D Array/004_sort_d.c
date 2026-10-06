//sort array 3 to 7 in descending order 

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr = NULL;
    int n, i, j, temp;

    printf("enter how much elements you want : ");
    scanf("%d",&n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("enter array elements\n");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",(ptr + i));
    }
    printf("\n");

    printf("Array elements are\n");
    for(i = 0 ; i < n ; i++)
    {
        printf("%d\t",*(ptr + i));
    }
    printf("\n");

    for(i = 2 ; i < 6 ; i++)
    {
        for(j = i+1 ; j < 7 ; j++)
        {
            if(*(ptr + i) < *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

   
    printf("\n");
    printf("Sorted array \n");
    for(i = 0 ; i < n ; i++)
    {
        printf("%d\t",*(ptr+i));
    }

    free(ptr);
}