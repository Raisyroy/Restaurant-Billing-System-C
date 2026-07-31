#include <stdio.h>

int main()
{
    int n = 5;
    int a[5][5];
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;
    int i, j;

    while (top <= bottom && left <= right)
    {
        // Left to Right
        for (j = left; j <= right; j++)
            a[top][j] = num++;
        top++;

        // Top to Bottom
        for (i = top; i <= bottom; i++)
            a[i][right] = num++;
        right--;

        // Right to Left
        for (j = right; j >= left; j--)
            a[bottom][j] = num++;
        bottom--;

        // Bottom to Top
        for (i = bottom; i >= top; i--)
            a[i][left] = num++;
        left++;
    }

    // Print the matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}