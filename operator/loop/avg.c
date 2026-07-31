#include<stdio.h>
int main()
{
    int n,i;
    float average;
    printf("Enter the number:");
    scanf("%d",&n);

int sum=0;
    for(i=1; i<=n; i++)
    {
        sum =sum+1;
    }
         printf("sum=%d\n",sum);

average= (float)sum/n;
    
    printf("average=%g\n",average);

return 0;
}