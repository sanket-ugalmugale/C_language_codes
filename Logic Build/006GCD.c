#include<stdio.h>
void main ()
{
int n1, n2, i, min, GCD ;

printf("n1 : ");
scanf("%d",&n1);
printf("n2 : ");
scanf("%d",&n2 );

min=n1 < n2 ? n1 : n2;

for(i=1 ; i <= min ; i++)
{
	if(n1 % i == 0 && n2 % i == 0)
	{	
		GCD = i ;
	}
}

printf("GCD of %d and %d is %d", n1, n2, GCD );
}