#include <stdio.h>
void main()
{
    char str [100];
    int i, vcount=0, ccount=0;

    printf("enter a string\n");
    fgets(str, sizeof(str), stdin);

    printf("Given String is :\n%s",str);

    i=0;
    while(str[i] != '\n')
    {
        if(str[i] == 'a'|| str[i] == 'A' ||
           str[i] == 'e'|| str[i] == 'E' ||
           str[i] == 'i'|| str[i] == 'I' ||
           str[i] == 'o'|| str[i] == 'O' ||
           str[i] == 'u'|| str[i] == 'U' )
        {
            vcount++;
        }

        else if(str[i] >= 'A' && str[i] <= 'Z' ||
                str[i] >= 'a' && str[i] <= 'z' )
        {
            ccount++;
        }
        i++;
    }

    printf("Number of vowels : %d\n",vcount);
    printf("Number of Consonants : %d",ccount);
}