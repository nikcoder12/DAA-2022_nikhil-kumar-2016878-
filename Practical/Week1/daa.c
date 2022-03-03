#include <stdio.h>
int main()
{
     int n;
  printf("enter the number of n:");
  scanf("%d",&n);
  int a[n];
  for(int i = 0;i<n ;i++)
  {
      scanf("%d",&a[i]);
  }
  for(int j = 0; j<n ;j++)
  {
      printf("%d ",a[j]);
  }
  int key;
  int k, temp = 0;
  printf("\nenter the key element");
  scanf("%d",&key);
  for(k = 0;k<n;k++)
  {
         temp++;
      if(key == a[k])
      {
          printf("element presented in array\n");
          break;
      }
  }
  if(k == n)
  {
      printf("elemnt not presented");
  }
  printf("%d",temp);
    return 0;
}
