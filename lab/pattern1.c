#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
          
        for(j = 1; j <= n - i; j++)  // Print spaces  
        {
            printf("  ");
        }

         
        for(k = i; k >= 1; k--) // Print numbers  
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}