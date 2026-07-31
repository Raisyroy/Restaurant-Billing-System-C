#include<stdio.h>
int main()
{
int n ,i,j;
    printf("Enter the number if lines:");
    scanf("%d",&n);
 char ch='A';

    for (  i = 1; i <= n; i++)
    {
        
           for ( j= 1; j <=n; j++)
           {
            if(i+j<=n)
            printf("   ");
            else
            printf("%c ",ch++);
 
    }
    printf("\n");
     
}
return 0;
}