#include<stdio.h>
#include<stdlib.h>
void main()
{
    int* ptr = NULL;
    int i;

    ptr=(int*) malloc (5 * sizeof (int));

    for (i = 0 ; i < 5 ; i++)
    {
        *(ptr + i) = i + 100;
    }

    puts("structure elements are");
    for (i = 0 ; i < 5 ; i++)
    {
        printf("%d\n",*(ptr + i));
    }
    
    int* qtr = NULL;
    qtr = (int*) realloc (ptr,8 * sizeof(int));

    for (; i < 8 ; i++)
    {
        *(ptr+i) = 200 + i ;
    }
    puts("");

    puts("structure elements after realloc are");
    for (i = 0 ; i < 8 ; i++)
    {
        printf("%d\n",*(ptr + i));
    }








}