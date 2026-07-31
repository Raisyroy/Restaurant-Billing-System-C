#include <stdio.h>
int main()
{
    char ch;

    printf(" Enter the character:");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'A'...'Z':
         printf("upper case alphabet\n");
        break;
        
        case 'a'...'z':
         printf("lower case alphabet\n");
        break;

        case '0'...'9':
         printf("it is digit\n");
        break; 
    
    default:
     printf("A symbol\n");
    
    }
}
