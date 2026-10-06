//sum of all elements

#include<stdio.h>
void main()
{
    int n , arr[100],i,sum=0;

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

    for ( i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of all elements in array is %d",sum);
    
}