#include <stdio.h>

int main()
{
    int n, i, j;
    char ch = 'A';

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(ch % 2 != 0)
    printf("%c ", ch);
else
    printf("%c ", ch + 32);

            ch++;
        }

        printf("\n");
    }

    return 0;
}