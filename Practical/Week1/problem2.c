#include <stdio.h>
// MAX 100

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
  /*for(int j = 0; j<n ;j++)
  {
      printf("%d ",a[j]);
  }*/
  int m;
   for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    m =  a[i];
                    a[i] = a[j];
                    a[j] = m;
 
                }
 
            }
 
        }
  for(int j = 0; j<n ;j++)
  {
      printf("%d ",a[j]);
  }
  int key;
  int k, temp = 0;
  printf("\nenter the key element");
  scanf("%d",&key);
  int first,middle,last;
  first = 0;
  last = n - 1;
  middle = (first + last)/2;
  while(first <= last)
  {
      if(a[middle] < key)
      {
          first = middle + 1;
      }
      else if(a[middle] == key)
      {
          printf("\nelement is present in array at postion %d",middle + 1);
          break;
      }
      else
      {
        last = middle - 1;
      }
      middle = (first + last)/2;
      
  }
  if(first > last)
  {
      printf("\nelement is not present in array\n");
      printf("total number of comparision %d",n-1);
  }
  
 /* for(k = 0;k<n;k++)
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
  printf("%d",temp);*/
    return 0;
}
