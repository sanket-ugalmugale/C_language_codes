#include <stdio.h>
void main()
{
    char str [100];

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    printf("%s\n",str);
}