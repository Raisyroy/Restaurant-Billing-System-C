#include<stdio.h>
int main()
{
    int num ,fact=0;
    printf("Enter the number :");
    scanf("%d",&num);

    for(int i=2;i*i<=num;i++)
    {
         if ( num % i==0)
         {
             fact=1;
             break;
         }
         
    }
    if ( fact==0)
    {
        printf("Number is prime number");
    }
    else
        {

                    printf("Number is not prime number");
        }
    
    
}