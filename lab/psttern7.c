#include<stdio.h>
int main ()
{
    int i,j,n;
    //printf("Enter the number :");
    scanf("%d", &n);
     //upper half
     for(i=n;i>=1;i--)
     {
         for(j=i;j<=n;j++)
         {
             printf(" %d ", j);
         }
         printf("\n");
         
     }
     //lower half
     for(i=2;i<=n;i++)
     {
         for(j=i;j<=n;j++)
         {
             printf(" %d ",j);
         }
         printf("\n");
     }
}