#include <stdio.h>
int main()
{
    int n=1,i=10;

    label:
    printf("%d\n",i--);

    if ( i>=n)
    
        goto label;
    return 0;
}
