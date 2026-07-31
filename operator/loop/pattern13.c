 #include <stdio.h>

int main()
{
    int n, i, j,k;
 
    
    for(i = 1; i <= 2*n; i++)
    {
        if(i<=n)
        {
        for(j = 1; j <= i; j++)
        {
            printf("*");        }
        }
             printf("\n");
         
        }

    else
    {

    for(k = 2*n; k > 1; k--)
    {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
