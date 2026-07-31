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

    for(i = 0; i < size; i++)
    {
        int flag = 1;

        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}