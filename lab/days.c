
#include <stdio.h>

int main()
{
    int days, weeks, Days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    weeks = days / 7;
    Days = days % 7;

    printf("Weeks = %d\n", weeks);
    printf(" days = %d", Days);

    return 0;
}