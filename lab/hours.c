
#include <stdio.h>

int main ()
{
    int hour ,minutes , min;
    
     
    printf("Enter the time in minutes");
    scanf("%d",&minutes);

    hour = minutes / 60 ;
    min = minutes % 60 ;


   printf("%d hour %d min\n", hour, min);
    return 0;

}