#include <stdio.h>

int main()
{
   int n;
   printf("enter the array size:");
   scanf("%d",&n);
   
   int a[n];
   for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)//%d elment of array a is %d
   {
     printf("\n%d elment of array a is %d",i,a[i]);
   }
   //bubble sort
   int temp = 0;
   int count = 0;
   for(int i =0;i<n;i++)
   { 
     temp = a[i];
     for(int j = i+1;j<n;++j)
     {
       count++;
       if(a[i] > a[j])
       {
         a[i] = a[j];
         a[j] = temp;
       }
     }
   }
   printf("\narray after bubble sorting");
   for(int i=0;i<n;i++)//%d elment of array a is %d
   {
     printf("\n%d elment of array a is %d",i,a[i]);
   }
   printf("total number of comparison: %d",count);
    return 0;
}
