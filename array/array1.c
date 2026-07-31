#include<stdio.h>
int main()
{
    int arr[5] ={10,20,30,40,50};

    printf("Size of array -> %ld\n",sizeof(arr));

printf("arr -> %hu\n",arr);
 printf("arr[0] -> %hu\n",&arr[0]);
printf("arr[1] -> %hu\n",&arr[1]);
printf("arr[2] -> %hu\n",&arr[2]);
printf("arr[3] -> %hu\n",&arr[3]);
 printf("arr[4] -> %hu\n",&arr[4]);

 for(int i=0; i<5; i++)
 {
    printf("arr[%d]->%d\n",i,arr[i]);
 }
  
  return 0;

} 