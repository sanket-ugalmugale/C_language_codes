#include<stdio.h>
void main()
{
    int n, i, j, flag=0;

    printf("enter value of n : ");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        flag=0;
        if(i == 2)
        {
            printf("%d is prime\n",i);
        }
        else
        {
            for(j=2 ; j<i ; j++)
            {
                if(i % j == 0)
                {
                    //printf("%d is not prime\n",i); we only have to print prime no
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 0)
            {
                printf("%d is prime\n",i);
            }
        }
    }
}