
#include <stdio.h>

int main()
{
    printf("enter the size of the array:");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int temp ;
    //sorting
    for(int i =0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i] > arr[j] )
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    for(int i =0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   // int a = arr[0];
   // int b = arr[n-1];
    int key;
    int flag =0;
    printf("\nenter the value of key:");
    scanf("%d",&key);
         int a = arr[0];
         int b = arr[n - 1];
    for(int i =0;i<n;i++)
    {
        if((a + b) > key)
        {
            b = arr[n - i - 1];
        }
        else if((a + b) < key)
        {
            a = arr[i + 1];
        }
        else if((a + b ) == key)
        {
            printf("\nkey is found");
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\nkey is not found");
    }
    return 0;
}

