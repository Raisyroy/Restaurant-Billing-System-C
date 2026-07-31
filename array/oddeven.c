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

    int  odd_arr[size];
     int  even_arr[size];
     int odd=0,even=0;

      for(i = 0; i < size; i++)
      {

      if(arr[i]%2==0)
      {
        even_arr[even]=arr[i];
        even++;
      }

      else
      {
         odd_arr[odd ]=arr[i];
        odd++;
      }

    }
    printf("Even array :");
    for( i = 0; i < even; i++)
    printf("%d ", even_arr[i]);

     printf("Odd array :");
    for( i = 0; i < odd; i++)
    printf("%d ", odd_arr[i]);
    
}
 