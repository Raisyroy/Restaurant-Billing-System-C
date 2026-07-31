#include <stdio.h>

int main()
{

    int n1,n2;
    
     
    printf(" Enter both number : ");
    scanf("%d%d", &n1, &n2);

    int sum = n1+n2;
    int dif= n1-n2;
    int multi= n1*n2;
    
    printf("sum=%d\n",sum);
    printf("multi =%d\n",multi);
    printf("divi%g\n", (float) n1/n2); 

    return 0;

}
