#include<stdio.h>

union demo
{
    int a ;
    char b;
    short int c;
    double d;
}d1;

void main ()
{
    d1.a=20;
    d1.b=30;
    printf("%d\n",d1.a);        //replace a = 20 by 30 
    printf("memory for given structure/union is %d byte",sizeof(d1));
}
