#include<stdio.h>
void main()
{
    int arr[3][3],brr[3][3],crr[3][3];
    int row, col, k, sum=0;

    printf("Enter elements of matrix arr\n");
    for(row = 0; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            scanf("%d",&arr[row][col]);
        }
    }

    printf("Elements of matrix arr\n");
    for(row = 0; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
    }

    printf("Enter elements of matrix brr\n");
    for(row = 0; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            scanf("%d",&brr[row][col]);
        }
    }

    printf("Elements of matrix brr\n");
    for(row = 0; row < 3 ; row ++)
    {
        for(col = 0 ; col < 3 ; col ++)
        {
            printf("%d\t",brr[row][col]);
        }
        printf("\n");
    }

    printf("Multiplication of given 2 matrices\n");
    for(row = 0 ; row < 3  ; row ++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            sum=0;
            for(k = 0 ; k < 3 ; k ++)
            {
                sum += arr[row][k] * brr[k][col];
            }
            crr[row][col] = sum;
        }
    }

    for(row = 0 ; row < 3  ; row ++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%d\t",crr[row][col]);
        }
        printf("\n");
    } 
}