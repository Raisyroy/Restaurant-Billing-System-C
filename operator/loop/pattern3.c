#include<stdio.h>
int main()
{
    int n ,i,j;
     

    printf("Enter the number if lines:");
    scanf("%d",&n);

    for (  i =1; i <= n; i++)
    {
            char ch='A';
           for ( j=1; j <= n; j++)
           {
            printf("%c",ch++);
           }
           printf("\n");

    }
    return 0;
}