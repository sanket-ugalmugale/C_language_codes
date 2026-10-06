#include <stdio.h>
void main()
{
    char str1[100],str2[100];
    int i = 0;

    printf("enter the string\n");
    fgets(str1, sizeof(str1), stdin);
    printf("\n");

    printf("fisrt String = %s\n",str1);

    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] ='\0';

    printf("Second String = %s\n",str2);
}