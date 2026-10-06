#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr = NULL;
    int n, i, j, search, flag = 0;

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

    printf("\n");
    printf("enter elements you want to search : ");
    scanf("%d",&search);

    for(i = 0 ; i < n ; i++)
    {
        if(search == *(ptr + i))
        {
            printf("%d is found in given array\n",search);
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        printf("%d is not found in given array",search);
    }

    free(ptr);
}

