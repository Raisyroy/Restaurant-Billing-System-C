#include<stdio.h>
int main()
{
int n ,i,j;
    printf("Enter the number if lines:");
    scanf("%d",&n);
for ( i = 1; i < 5; i++)
{
    for ( j = 1; j <= 5; j++)
    {
        if ( i+j>=n+1)
        {
          printf("%d",j);
        }
        else
        printf("\n");
        
    }
}
}
