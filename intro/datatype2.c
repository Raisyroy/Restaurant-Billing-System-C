#include <stdio.h>
int main()
{
char ch;
int num;
float fnum;
double dnum;

printf("Enter the character :");
scanf("%c", &ch);
printf("Enter integer :");
scanf("%d", &num);
printf("Enter float value :");
scanf("%f", &fnum);
printf("Enter  double value :");
scanf("%lf", &dnum);

printf("%d %c %f %lf\n",num,ch,fnum,dnum);
return 0;

}