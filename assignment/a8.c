#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    
    for(i = n; i >= 1; i--)
    {
        for(j = i; j <= n; j++)
        {
            printf("%d", j);

            if(j != n)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    /* Lower half */
    for(i = 2; i <= n; i++)
    {
        for(j = i; j <= n; j++)
        {
            printf("%d", j);

            if(j != n)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}