#include <stdio.h>

int main()
{
    int A, R, N;   
    int i;
    int ap, gp;
    float hp;

    printf("Enter the First Number 'A': ");
    scanf("%d", &A);

    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d", &R);

    printf("Enter the number of terms 'N': ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Invalid input");
    }
    else
    {
        / AP /
        printf("AP = ");

        ap = A;  //Start AP with the first number.
        for(i = 1; i <= N; i++)
        {
            printf("%d", ap);

            if(i != N)
                printf(", ");

            ap = ap + R;
        }

        printf("\n");

        / GP /
        printf("GP = ");

        gp = A;
        for(i = 1; i <= N; i++)
        {
            printf("%d", gp);

            if(i != N)
                printf(", ");

            gp = gp * R;
        }

        printf("\n");

        / HP /
        printf("HP = ");

        ap = A;

        for(i = 1; i <= N; i++)
        {
            hp = 1.0 / ap;

            printf("%g", hp);

            if(i != N)
                printf(", ");

            ap = ap + R;
        }
    }

    return 0;
}