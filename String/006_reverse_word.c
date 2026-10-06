#include<stdio.h>
void main()
{
    char str[100];
    int i,j;

    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);

    printf("\ngiven string\n%s",str);

    printf("\nreverse word string \n");

    i=0;
    while(str[i] != '\0')
    {
        while(str[i] != ' ' && str[i] != '\n')
        {
            i++;
        }
        
        j=i-1;
        
        while(j >= 0 && str[j] != ' ')
        {
           printf("%c",str[j]);
           j--;
        }
        printf(" ");
        i++;
    }
    
}