 #include<stdio.h>
int main()
{
int n ,i,j;
    printf("Enter the number if lines:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("invalid ,print odd number");
        return 0;
    }
  i=1;

while ( i<=n)
{
   j=1;
   while ( j<=n)
   {
 if(i==j || (i+j==n+1) )
            
            printf("%d",j);
            else
            {
        
    printf(" ");
            }

    j++;
   }
     
 printf("\n");
   i++;         }
}
 
