#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of arry : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the element of arry : ");
    for (  i = 0; i < size; i++)  //   ask the elements
    {
         scanf("%d",&arr[i]);
    }

     for (  i = 0; i < size; i++) // print the elements
     {
        printf("%d",arr[i]);
     }
     return 0;
}