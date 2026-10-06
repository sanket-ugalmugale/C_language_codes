#include<stdio.h>
void main ()
{
	int n,rem,sum=0,temp;

	printf("enter value of n : ");
	scanf("%d",&n);

	temp=n;

	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("the sum of all digits of %d is %d",temp,sum);	
}