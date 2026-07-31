#include<stdio.h>
int main()
{
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);
 
    for(i=limit; i>=2; i=i-2)
    {
        if(i%2==0)
        {
        printf("%d",i);
    }
    printf("\n");
}
}