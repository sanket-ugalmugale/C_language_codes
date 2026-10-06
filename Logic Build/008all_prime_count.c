#include<stdio.h>
void main()
{
    int n, i, j, count=0;

    printf("enter value of n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
            count=0;
        for(j=1; j<=i; j++)
        {
           if(i % j == 0)     
            {
                count++;
            }
        }    
        if(count==2)
        {
            printf("%d is prime number\n",i);
        }
    }

}