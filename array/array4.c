#include<stdio.h>
int main()
{
    int i,size;
    printf("Enter the size of array :");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] %2)

        arr[i]=1;
        

        else
          arr[i]=0;

         printf(" %d",arr[i]);
    }
}