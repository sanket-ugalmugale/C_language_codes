#include<stdio.h>
void main()
{
    int n, i, count=0, sum=0, temp, ans, rem; 

    printf("enter value of n : ");
    scanf("%d",&n);

    temp = n;

    while(n>0)
    {
        n = n / 10;
        count++;
    }

    n = temp;

    while(n>0)
    {
        ans=1;
        rem = n % 10;
        for(i=1; i<=count; i++)
        {
            ans = ans * rem ; 
        }
        sum = sum + ans;
        n = n / 10;
    }

    if(temp = sum)
    {
        printf("%d is Armstrong's number",temp);
    }
    else
    {
        printf("%d is not Armstrong's number",temp);
    }
}