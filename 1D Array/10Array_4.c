//find max and min element

#include<stdio.h>
void main()
{
    int n, i, arr[100], max, min;
    printf("enter how many elements you want\n");
    scanf("%d",&n);

    if(n<=0 && n>=100)
    {
        printf("enter valid size\n");
    }
    else
    {
        printf("enter array elements\n");
        for(i=0; i<=n-1; i++)
        {
            scanf("%d",&arr[i]);
        }

        printf("array elements are\n");
        for(i=0; i<=n-1; i++)
        {
            printf("%d\n",arr[i]);
        }
    }

    max=arr[0];
    for(i=1; i<=n-1; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("maximum array elements is %d\n",max);

    min=arr[0];
    for(i=1; i<=n-1; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("minimum array elements is %d\n",min);
}