
#include <stdio.h>
int main()
{
    int num, rev = 0, rem, temp; //rev = 0 → Stores the reversed number. It starts at 0.

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)
    {
        rem = num % 10;  //rem → Stores the last digit of the number.
        rev = rev * 10 + rem;  //Take the last digit → Add it to the reverse → Remove the last digit → Repeat until the number becomes 0.
        num = num / 10;
    }

    if (temp == rev)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}