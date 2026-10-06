#include<stdio.h>
void main()
{
 int x,y,ans=1;

printf("enter value of x : ");
scanf("%d",&x);
printf("enter value of power : ");
scanf("%d",&y);

for(int i=1; i<=y; i++)
{
	ans = ans * x ;
}
printf("%dth power of %d is %d",y,x,ans);
}

