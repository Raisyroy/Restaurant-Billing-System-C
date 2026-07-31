#include<stdio.h>
int main()
{
int n ,i,j,k;
    printf("Enter the number if lines:");
    scanf("%d",&n);

    for (  i = 1; i <= n; i++)
    {
        char ch='A';
           for ( j= 1; j <= i; j++)
           {

            if(i+j<=n)
            printf(" ");
            else 
            printf("%c",ch++);
 
    }
     ch --;

     for ( k= i; k>1; k--)
     {
        printf(" %c",ch--) ;
     }
     
    printf("\n");
     
}
return 0;
}
     