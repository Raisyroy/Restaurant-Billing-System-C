#include <stdio.h>
int main()
{
    char dir;
    printf("enter the direction:");
    scanf("%c",&dir);

    switch ( dir)
    {
    case 'N':
    case 'n':
        printf(" you aare facing at north direction\n");

        break;

    
        case 'E':
        case 'e':
        printf(" you aare facing at east direction\n");
        
        break;

        case 'S':
        case 's':
        printf(" you aare facing at south direction\n");
        
        break;

        case 'W':
        case 'w':
        printf(" you aare facing at west direction\n");
        
        break;

    default:
        printf("invalid input");
    }


}