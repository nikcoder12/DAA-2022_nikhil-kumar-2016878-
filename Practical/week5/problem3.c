#include <stdio.h>

int printCommon(int arr1[],int len1,int arr2[], int len2)
{
    int i =0,j = 0;
    while(len1 > i && len2 > j)
    {
        if(arr[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr[i])
        {
            j++;
        }
        else{
            printf("\ncommon element is %d",arr1[i]);
            i++;
            j++;
        }
    }
}
int main()
{
    int n ,m;
    printf("enter the size of arr1:");
    scanf("%d",&d);
    printf("enter the size of arr2:");
    
}
int main()
{
    
    return 0;
}
