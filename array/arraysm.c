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
    }
    int largest=arr[0];
    for(i=1;i<size;i++)
    {
        if (largest<arr[i])
        largest=arr[i];

    }
    printf("largest is %d\n",largest);

}