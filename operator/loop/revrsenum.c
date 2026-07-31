#include<stdio.h>
int main()
{
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);
     
    for(i=limit; i>0; i--)
    {
        printf("%d",i);
    }
    printf("\n");
}
