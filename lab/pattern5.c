#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1)
                printf("1 ");
            else if(i == n)
                printf("3 ");
            else if(j == 1)
                printf("2 ");
            else if(j == n)
                printf("4 ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}