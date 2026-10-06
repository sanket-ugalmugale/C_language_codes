#include<stdio.h>
void main()
{
    int n, i, j, count=0; 

    printf("enter value of n : ");
    scanf("%d",&n);

    for(i=1 ; i<=n; i++)
    {
        count=0;
        if(n % i == 0)
        {
            for(j=1; j<=i; j++)
            {
                if(i % j == 0)
                {
                    count ++;
                }
            }
        }
        if(count == 2)
        {
            printf("prime factor of %d is %d\n",n,i);
        }
    }
}