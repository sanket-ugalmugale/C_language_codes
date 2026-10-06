#include<stdio.h>
void main ()
{
    char str1[100] , str2[100];
    int n , i=0, j=0, length=0, start;

    printf("enter string\n");
    fgets(str1,sizeof(str1),stdin);

    printf("enter how much last characters you want from given string : ");
    scanf("%d",&n);

    while (str1[length] != '\n')
    {
        length++;
    }

    start = length - n;
    
    for ( i = start ; i < length; i++)
    {
       str2[j] = str1[i];
       j++;
    }
    

    str2[j]='\0';
    printf("%s",str2);
    
}