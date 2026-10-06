#include<stdio.h>

struct Demo
{
    int a;
    int b;
}d1;

void func(struct Demo *x)
{
    x -> a = 50;     // (*x).a = 50;
    x -> b = 60;     // (*x).b = 60;
}

void main ()
{
    struct Demo d1; 
    printf("d1.a = %d\td1.b = %d",d1.a,d1.b);

    func(&d1);
    printf("\nd1.a = %d\td1.b = %d",d1.a,d1.b);

}
