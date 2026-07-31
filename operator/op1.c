#include<stdio.h>
int main()
{
    int n1=10,n2=10;
    int r1,r2;

    r1=++n1; // pre increment
    r2=n2++;  // post increment

    printf("r1=%d   r2=%d\n",r1,r2);
    printf("n1=%d   n2=%d\n",n1,n2);
}