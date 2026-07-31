#include <stdio.h>

int main()
{
    int n1, b, c;

    printf("Enter the Three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if((a > b && a < c) || (a < b && a > c))
    {
        printf("The middle number is %d", a);
    }
    else if((b > a && b < c) || (b < a && b > c))
    {
        printf("The middle number is %d", b);
    }
    else
    {
        printf("The middle number is %d", c);
    }

    return 0;
}