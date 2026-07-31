#include <stdio.h>
int main()
{
    int n=10,i=1;

    label:
    printf("%d",i++);

    if ( i<=n)
    
        goto label;
    return 0;
}
