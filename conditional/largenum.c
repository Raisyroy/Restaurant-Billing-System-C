#include <stdio.h>
int main()
{

    int n1,n2 ,n3;
     printf("Enter the num:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if ( n1>n2  && n1>n3)
    {
        printf("n1 is largest num\n");

    }
    else if ( n2>n3)
    {
              printf("n2 is largest num\n");  
    }
    else
    {
                printf("n3 is largest num\n");
    }
     return 0;
}

