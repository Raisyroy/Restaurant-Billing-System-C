 #include <stdio.h>

int main()
{
    int n, i, j;
    char ch;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        
        for(ch = 'A' + n - i - 1; ch >= 'A'; ch--) // Print letters 
        
        {
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}