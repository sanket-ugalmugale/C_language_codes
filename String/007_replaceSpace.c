#include <stdio.h>
void main()
{
    char str [100];
    int i,temp;

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    i=0;
    while(str[i] != '\n')
    {
        if(str[i] == ' ')
        {
            str[i] = '$' ;
        }
        i++;
    }

    printf("%s\n",str);
}