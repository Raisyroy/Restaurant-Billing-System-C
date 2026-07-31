#include<stdio.h>
int main()
{
int n ,i,j;
    printf("Enter the number if lines:");
    scanf("%d",&n);

  i=1;

while ( i<=n)
{
   j=1;
   while ( j<=n)
   {
  
if(i==1 || i==n)
printf("-");

else if(j==1 || j==n)
printf("|");
else
printf(" ");
    j++;
   }
     
 printf("\n");
   i++;         }
}
 
