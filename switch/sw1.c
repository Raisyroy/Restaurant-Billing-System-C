#include <stdio.h>
int main()
{

    int num;
     printf("Enter the num:");
    scanf("%d",&num);

    switch ( num)
    {
    case 10:
        printf("num is 10\n");
        break;

       case 20:
        printf("num is 20\n");
        break; 

        case 30:
        printf("num is 30\n");
        break; 
        
    
    default:
 printf("invalid input");
    }
}