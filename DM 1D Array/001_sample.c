#include<stdio.h>
#include<stdlib.h>

void main()
{
    int* ptr = NULL;
    int n, i ;

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

    
}

