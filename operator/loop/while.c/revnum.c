#include <stdio.h>
int main()
{
    int num,rev,i;
    printf("Enter the number:");
    scanf("%d",&num);
    rev=0;
    i=1;

    while ( num>0)
    {
        rev=num%10+rev*10;

        num=num/10;
    }
    printf("reverse:%d",rev);
    
}