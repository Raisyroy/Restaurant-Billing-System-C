 
#include <stdio.h>

int main()
{
    int n, sum = 0, i;

    printf("Enter a number : ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Error : Invalid Input, Enter only positive number");
    }
    else
    {
        for(i = 1; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == n)
        {
            printf("Yes, entered number is perfect number");
        }
        else
        {
            printf("No, entered number is not a perfect number");
        }
    }

    return 0;
}