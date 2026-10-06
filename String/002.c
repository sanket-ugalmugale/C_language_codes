//#include<stdio.h>
void main ()
{
    char str[100];
    int i;

    printf("enter string\n");
    fgets(str, sizeof(str),stdin);

    int space = 0;
    while(str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            if (!space)
            {
                printf(" ");
                space = 1 ;
            }
        }
        else
        {
            printf("%s",str);
            space = 0;
        }
        i++;
    }
}