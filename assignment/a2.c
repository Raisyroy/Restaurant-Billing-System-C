#include <stdio.h>

int main()
{
    int n, start_day, day;

    printf("Enter the value of 'n' : ");
    scanf("%d", &n);

    if(n <= 0 || n > 365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365");
        
    }

    printf("Choose First Day :\n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");

    printf("Enter the option to set the first day : ");
    scanf("%d", &start_day);

    if(start_day <= 0 || start_day > 7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7");
         
    }

    day = (start_day + n - 1) % 7;

    switch(day)
    {
        case 0:
            printf("The day is Saturday");
            break;

        case 1:
            printf("The day is Sunday");
            break;

        case 2:
            printf("The day is Monday");
            break;

        case 3:
            printf("The day is Tuesday");
            break;

        case 4:
            printf("The day is Wednesday");
            break;

        case 5:
            printf("The day is Thursday");
            break;

        case 6:
            printf("The day is Friday");
            break;
    }

    return 0;
}