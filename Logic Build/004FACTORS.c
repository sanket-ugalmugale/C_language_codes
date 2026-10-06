#include<stdio.h>
void main()
{
 int n,i;

printf("enter value of n : ");
scanf("%d",&n);

printf("Factors of %d are\n",n);
for(int i=1; i<=n; i++)
{
	if(n % i == 0)
	{
		printf("%d\n",i);
	}
}

}