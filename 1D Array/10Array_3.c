//find whether given number is in array or not

#include<stdio.h>
void main()
{
    int n, i, arr[100], a, flag=0;
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

    printf("enter number you want to found in array\n");
    scanf("%d",&a);

    for(i=0 ; i<n ; i++)
    {
        if(a == arr[i])
        {
            printf("%d is element of given array",a);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
    printf("%d is not element of given array",a);
    }
}