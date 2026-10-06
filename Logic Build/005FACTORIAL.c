#include<stdio.h>
void main ()
{
int n, i, ans=1;

printf("n : ");
scanf("%d",&n);

for(i=1 ; i<=n ;i++)
{
	ans = ans * i;
}

printf("factorial of %d is %d",n,ans);
}