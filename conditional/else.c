#include <stdio.h>
int main()
{

    int num;
     printf("Enter the num:");
    scanf("%d",&num);

    if (num>0)
    {
        printf(" %d   num is postive num\n",num);

    }
     else if ( num<0)
    {
       printf("%d num is negtive\n",num); 
    }
    
       else  
{

     printf("%d  either postive or negtive\n",num);
}

    return 0;
    
}