#include <stdio.h>
void main()
{
    char str [100];
    int i , j ;

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    i=0;
    while (str[i] != '\0')
    {
        while (str[i] != '\n')
        {
            i++;
        }
        
        while (str[i] != ' ' && i>=0)
        {
            i--;
        }
        i++;

        while (str[i] != '\n' && str[i] != '\0')
        {
            printf("%c",str[i]);
            i++;
        }
        i++;
    }

}