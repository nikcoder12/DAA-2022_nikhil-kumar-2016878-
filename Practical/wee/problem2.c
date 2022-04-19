#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag =0;
    int next;
    for(int i=0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            next = j+1;
            if(arr[next] == (arr[i] + arr[j]))
            {
                flag++;
                printf("%d %d %d\n",i+1,j+1,next+1);
            }
        }
    }
    if(flag == 0)
    {
        printf("no sequence found");
    }

    return 0;
}
