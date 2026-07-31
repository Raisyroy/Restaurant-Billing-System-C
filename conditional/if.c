#include <stdio.h>
int main()
{

    int num;
    printf("Enter the num:");
    scanf("%d",&num);

    if ( num>10)
    {
        printf(" %d  is greater than 10\n",num);

    }
    else if ( num<10)
    {
       printf("%d is less than 10\n",num); 
    }
    
       else  
{

     printf("%d is equal to 10\n",num);
}

    return 0;
    
}