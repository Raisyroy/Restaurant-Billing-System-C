 #include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
     for(i = 0; i < size /2; i++)
     {
        int temp=arr[i];
        arr[i]=arr[size -1-i];
arr[size-1-i]=temp;
     }

     for(i=0;i<size;i++)
     printf("%d ",arr[i]);
    }