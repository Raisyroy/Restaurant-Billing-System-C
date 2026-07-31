#include<stdio.h>

int main()
{
    int num;

    printf("Enter two numbers :");
    scanf("%d",&num);

      num>0? (num%2? printf(" odd positive\n"):printf("  even positive\n")):
      (num==0? printf("zero\n") :
                          (num%2? printf(" odd negative\n"): printf(" even negative\n")));

      
     return 0;
}