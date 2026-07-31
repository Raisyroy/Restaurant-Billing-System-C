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

        if(arr[i] <= 1)
        {
            flag = 0;
        }
        else
        {
            for(j = 2; j <= arr[i] / 2; j++)
            {
                if(arr[i] % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag)
            printf("%d is a prime number\n", arr[i]);
        else
            printf("%d is not a prime number\n", arr[i]);
    }

    return 0;
}