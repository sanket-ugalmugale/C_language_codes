#include<stdio.h>
void main ()
{
int n1, n2, i, max ;

printf("n1 : ");
scanf("%d",&n1);
printf("n2 : ");
scanf("%d",&n2);

max=n1 > n2 ? n1 : n2;

while(1)
	{
		if(max % n1 == 0 && max % n2 == 0)
		{	
			printf("LCM of %d and %d is %d",n1,n2,max) ;
			break;
		}
	max++;
	}
}