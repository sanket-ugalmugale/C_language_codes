//print array elements in order

#include<stdio.h>
void main()
{
    int n , arr[100],i;

    printf("Enter how many elements you want in array\n");
    scanf("%d",&n);

    if(n<=0 && n>=100)
    {
        printf("enter valid size of array\n");
    }
    else
    {
        printf("enter elements in array\n");
        for(i=0 ; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        
        printf("The array elements are\n");
        for(i=0 ; i < n ; i++)
        {
            printf("%d\n",arr[i]);
        }
    }
}