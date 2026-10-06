#include<stdio.h>
void main ()
{
	int n,rem,ans=0,temp;

	printf("value of no : ");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
		rem=n%10;
		ans=ans*10 + rem;
		n=n/10;
	}
	printf("the reverse of %d is %d",temp,ans);
}