#include<stdio.h>
void main()
{
    int n, flag=0;

    printf("enter value of n : ");
    scanf("%d",&n);

    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
        {
            printf("%d is not prime number\n",n);
            flag=1;
            break;
        }
    }
    
    if(flag == 0)
    {
        printf("%d is prime number\n",n);
    }
}