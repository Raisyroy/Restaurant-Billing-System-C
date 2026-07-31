#include<stdio.h>
int main()
{
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(i=limit; i>=1; i=i-2)
    {
        
        printf("%d",i);
    }
    printf("\n");
}
 