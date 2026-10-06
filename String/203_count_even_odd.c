//count even and odd words

#include <stdio.h>
void main()
{
    char str [100];
    int i = 0 , j , count=0, even=0, odd=0;

    printf("enter the string\n");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0')
    {
        count=0;
        while(str[i] != ' '  && str[i] != '\n')
        {
            i++;
        }

        j=i-1;
        while (j>=0 && str[j] != ' ')
        {
            count++;
            j--;
        }

        if (count % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
        
    }

    printf("even words = %d\nodd words = %d",even,odd);
}