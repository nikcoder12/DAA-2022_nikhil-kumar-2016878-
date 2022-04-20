#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i1=0;i1<n;i1++)
    {
        scanf("%d",&arr[i1]);
    }
    int key,i;
    int count =0,swap =0;
    for(int j =1;j<n;j++)
    {
         i = j - 1;
        key = arr[j];
        //count++;
        while(i >= 0 && arr[i] > key)
        {
            count++;
            swap++;
            arr[i + 1] = arr[i];
            i = i -1;
        }//count++;
        swap++;
        arr[i + 1] = key;
    }
    for(int i2 =0;i2<n;i2++)
    {
        printf("%d ",arr[i2]);
    }
    printf("total number of comparision:%d\n",count);
    printf("total number of swapping:%d",swap);

    return 0;
}




