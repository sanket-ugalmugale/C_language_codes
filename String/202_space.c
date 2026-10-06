#include <stdio.h>
void main()
{
    char str [100];
    int i=0, count=0;

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            count ++;
        }
        i++;
    }

    printf("%d",count);
}