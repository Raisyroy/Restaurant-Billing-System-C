#include <stdio.h>

int main()
{
    int i, j;
    int start = 3;

    for(i = 2; i <= 4; i++)
    {
        for(j = start; j >= start - i + 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
        start = start + i + 1;
    }

    return 0;
}