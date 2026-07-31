#include <stdio.h>

int main()
{
    int amount, n;

    printf("Enter amount: ");
    scanf("%d", &amount);

    if(amount >= 500)
    {
        n = amount / 500;
        printf("500 = %d\n", n);
        amount = amount % 500;
    }

    if(amount >= 200)
    {
        n = amount / 200;
        printf("200 = %d\n", n);
        amount = amount % 200;
    }

    if(amount >= 100)
    {
        n = amount / 100;
        printf("100 = %d\n", n);
        amount = amount % 100;
    }

    if(amount >= 50)
    {
        n = amount / 50;
        printf("50 = %d\n", n);
        amount = amount % 50;
    }

    if(amount >= 20)
    {
        n = amount / 20;
        printf("20 = %d\n", n);
        amount = amount % 20;
    }

    if(amount >= 10)
    {
        n = amount / 10;
        printf("10 = %d\n", n);
        amount = amount % 10;
    }

    if(amount >= 5)
    {
        n = amount / 5;
        printf("5 = %d\n", n);
        amount = amount % 5;
    }

    if(amount >= 2)
    {
        n = amount / 2;
        printf("2 = %d\n", n);
        amount = amount % 2;
    }

    if(amount >= 1)
    {
        printf("1 = %d\n", amount);
    }

    return 0;
}

 