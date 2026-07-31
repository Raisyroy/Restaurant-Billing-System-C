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
        printf(" %d is odd\n",arr[i]);

        else
         printf(" %d is even\n",arr[i]);
    }
}
    