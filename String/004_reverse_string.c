#include<stdio.h>
void main()
{
    char str[100];
    int i;

    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);

    printf("given string\n%s",str);

    i=0;
    while(str[i] != '\n')
    {
        i++;
    }
    while(i >= 0)
    {
        printf("%c",str[i]);
        i--;
    }

}