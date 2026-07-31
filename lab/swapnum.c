#include <stdio.h>
int main()
{

    int num1,num2,temp;
     printf("Enter the num:");
    scanf("%d%d",&num1,&num2);

    printf("Before swap: %d%d\n",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;
     printf("after swap: %d%d\n",num1,num2);

}
    
    