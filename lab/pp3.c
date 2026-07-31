 #include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == 1)
                printf("%2d ", j);
            else if(j == 1)
                printf("%2d ", i);
            else if(i == 2)
                printf("%2d ", j + 4);
            else if(i == 3)
                printf("%2d ", j + 8);
            else if(i == 4)
            {
                if(j == 2)
                    printf("%2d ", 8);
                else if(j == 3)
                    printf("%2d ", 11);
                else if(j == 4)
                    printf("%2d ", 13);
                else
                    printf("%2d ", 14);
            }
            else if(i == 5)
            {
                if(j == 2)
                    printf("%2d ", 9);
                else if(j == 3)
                    printf("%2d ", 12);
                else if(j == 4)
                    printf("%2d ", 14);
                else
                    printf("%2d ", 15);
            }
        }
        printf("\n");
    }

    return 0;
}