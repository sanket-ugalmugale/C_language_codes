#include<stdio.h>
void main()
{
    char str[100];
    int i, count=0;

    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);

    printf("given string\n%s",str);

    i=0;
    while(str[i] != '\n')
    {
        count++;
        i++;
    }

    printf("number of chatracters in given array are %d",count);
  

}