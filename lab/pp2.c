#include <stdio.h>

int main()
{
    int n, i, j, val;

    printf("Enter n value: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        val=1; //Every row starts with 1.
        for(j=0;j<=i;j++)
        {
            printf("%d ",val);
            val=val*(i-j)/(j+1);

        }
        printf("\n");
    }
}

   