//array elements in reverse order

#include<stdio.h>
void main()
{
    int n, i, arr[100];

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
        for(i=n-1; i>=0; i--)
        {
            printf("%d\n",arr[i]);
        }
    }
}