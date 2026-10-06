//count small capital space and digit

#include <stdio.h>
void main ()
{
    char str[100];
    int i=0, small=0, capital=0, space=0, digits=0 ;

    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            small++;
        }

        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }

        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        

        else if (str[i] == ' ')
        {
            space++;
        }

        i++;
    }

    printf("small = %d\ncapital = %d\nspace = %d\ndigits = %d",small,capital,space,digits);
    
}