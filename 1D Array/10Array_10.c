//sorted array of only even elements

#include<stdio.h>
void main()
{
    int n , arr[100], i, pranjal, shruti, temp;

    printf("Enter how many elements you want in array\n");
    scanf("%d",&n);

    printf("emter array elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Random array elements\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    for ( pranjal = 0; pranjal < n-1; pranjal++)
    {
        for ( shruti = pranjal+1; shruti < n; shruti++)
        {
            if(arr[shruti] % 2 == 0 && arr[pranjal] > arr[shruti])
            {
                temp=arr[pranjal];
                arr[pranjal]=arr[shruti];
                arr[shruti]=temp;
            }
        }
    }

    printf("sorted array of only even elements\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
 
}