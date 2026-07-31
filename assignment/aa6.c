#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == j)
            {
                printf("%d", i);
            }
            else if(i + j == n + 1)  //n + 1 = 6  //i=1 j=5
            {
                printf("%d", n - i + 1);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}