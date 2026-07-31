 #include<stdio.h>
int main(){
    int i,size;
    printf("Enter the size of array :");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);

    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2)
        arr[i]=1;
        else
        arr[i]=0;
    printf(" %d ", arr[i]);
    
    }
    int flag=1;
    int dec=0;
    for(i=size-1;i>=0;i--)
    {
        if(arr[i]==1)
        {
            dec=dec+flag;
            flag=flag*2;
        }
        else
        {
             flag=flag*2;
        }
    }
        printf("Decimal is %d\n",dec);
        
    }
