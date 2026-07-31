#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("Enter the numbers:");
    scanf("%d%d",&n1,&n2);

    int pro=0;

    for(i=0; i<n1;i++)
    {
    pro=pro+2;
    }
    printf("product%d",pro);
    
    return 0;
} 