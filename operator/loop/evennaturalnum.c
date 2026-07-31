 #include<stdio.h>
int main()
{
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);

    for(i=2; i<=limit; i=i+2)
    {
        if(i%2==0)
        {
        printf("%d",i);
    }
    printf("\n");
}
}