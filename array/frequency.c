 #include <stdio.h>

int main()
{
    int size, i, j, count;

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
        count = 1;

        // Check if element is already counted
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                count = 0;
                break;
            }
        }

        if(count == 0)
            continue;

        // Count frequency
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        printf("%d\t%d\n", arr[i], count);
    }

    return 0;
}