#include<stdio.h>
int main()
{
    int size,i;
     float average;
    printf("Enter the size of arry : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the element of arry : ");
    for (  i = 0; i < size; i++)  //   ask the elements
    {
         scanf("%d",&arr[i]);
    }

     int sum=0;
     for (  i = 0; i < size; i++) // print the elements
     {
        printf("%d ",arr[i]);
     
     printf("\n  ");

    
        sum =sum+arr[i];
    }
         printf("sum=%d\n",sum);

average= (float)sum/size;
    
    printf("average=%f\n",average);
     return 0;
}

 