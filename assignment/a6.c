#include<stdio.h>
int main ()
{
    
    int f=0,s=1,N=0,n;
    
    printf("Enter a number :");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("Invalid input");
        
    }
    
     
     while(N<=n)
   {
    printf("%d",N);

    f=s;
    s=N;
    N=f+s;
    
}  
    return 0;
}