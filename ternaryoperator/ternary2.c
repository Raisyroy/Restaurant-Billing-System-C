#include<stdio.h>
int main()
{
    int n1,n2,lar;

    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);

     lar=n1>n2?n1:n2;

     printf("%d is greater\n",lar);
     return 0;
}