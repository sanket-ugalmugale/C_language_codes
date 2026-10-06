#include <stdio.h>
#include <stdlib.h>
void main()
{
    int* ptr =NULL;
    int n, i, j, max1, max2;

    printf("enter how much aray elements you want\n");
    scanf("%d",&n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("\nenter array elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("\narray elements are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",*(ptr+i));
    }
    if(*(ptr + 0) > *(ptr + 1) )
    {
    max1 = *(ptr+0);
    max2 = *(ptr+1);
    }
    else
    {
        max1=*(ptr+1);
        max2=*(ptr+0);
    }

    for ( i = 2; i < n; i++)
    {
        if(max1 < *(ptr + i))
        {
            max2 = max1;
            max1 = *(ptr + i);
        }
        else if (*(ptr + i) > max2 && *(ptr + i) != max1)
        {
            max2 = *(ptr + i);
        }        
    }
    printf("\nsecond max value is %d",max2);

    free(ptr);
    
}