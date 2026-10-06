//count of number greater than, less than, and equal to zero

#include<stdio.h>
void main()
{
    int n, arr[100], i, zcount=0, pcount=0, ncount=0;

    printf("enter how many elements you want in array\n");
    scanf("%d",&n);

    printf("enter elements of array\n");
    for ( i=0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }

    printf("enter elements of array\n");
    for ( i=0; i < n; i++)
    {
       printf("%d\n",arr[i]);
    } 

    for ( i = 0; i < n; i++)
    {
       if (arr[i]==0)
       {
        zcount++;
       }
       else if (arr[i]>0)
       {
        pcount++;
       }
       else if (arr[i]<0)
       {
        ncount++;
       }
    }
    printf("Count of numbers equal to zero = %d\n",zcount);
    printf("Count of numbers greater than zero = %d\n",pcount);
    printf("Count of numbers less than zero = %d\n",ncount);
}