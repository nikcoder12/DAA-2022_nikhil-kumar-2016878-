#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);  
    int a[n];
    //enter sorted array
    printf("enter the sorted array:");
    for(int i =0 ; i<n ; ++i)
    {
        scanf("%d",&a[i]);
    }
    for(int j =0 ; j<n ; ++j)
    {
        printf("%d ",a[j]);
    }
    int key;
    printf("\nenter key value:");
    scanf("%d",&key);
    for(i =0;i<n;i++)
    {
        if(a[i] == key)
        {
            printf("key is present\n");
            break;
        }
    }
    if(i == n)
    {
        printf("key is not found\n");
    }
    int count = 0;
    for(int j =0 ; j<n ; ++j)
    {
     if(key == a[j])
     {
         count++;
     }
    }
    printf("%d times present in given array:",count);
    

    return 0;
}
