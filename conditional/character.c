#include <stdio.h>
int main()
{
    char ch;

    printf(" Enter the character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='z')
    {
        printf("upper case alphabet\n");

    }
    else if ( ch>=97 && ch<=122)
    {
           printf("lower case alphabet\n");
    }
    else if ( ch>='0' && ch <='9')
    {
          printf("It is digit\n");
    }
    else
    {
          printf(" It is a symbol\n");
    }
    return 0;
}
    












