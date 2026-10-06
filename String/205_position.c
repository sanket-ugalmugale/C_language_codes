#include <stdio.h>
void main()
{
    char str [100];
    int i = 0, count=0, position ;

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    printf("enter position of word\n");
    scanf("%d",&position);

    while (str[i] != '\0')
    {
        while (str[i] != ' ' && str[i] != '\n')
        {
            i++;
        }
        count++;

        if (count == position - 1 )
        {
            i++;
            while (str[i] != ' ' && str[i] != '\n')
            {
                printf("%c",str[i]);
                i++;
            } 
            
            while (str[i] != ' ' )
            {
                i++;
            }
        }
        i++;
    }
}