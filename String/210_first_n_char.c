#include<stdio.h>
void main()
{
    char str1 [100];
    char str2 [100];
    int i,n;

    printf("Enter string\n");
    fgets(str1, sizeof(str1),stdin);

    printf("Enter how much char you want to copy\n");
    scanf("%d",&n);

    for ( i = 0; i < n && str1[i] != '\0' ; i++)
    {
        str2[i]=str1[i];
    }

    str2[i] = '\0';

    printf("first %d characters are :\n%s",n,str2);
    
}