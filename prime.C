// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
   int i,n,flag;
   printf("enter n:");
   scanf("%d",&n);
  for(i=2;i<n;i++)
  {
      if(n%i!=0)
      {
      continue;
      }
      else
      {
          flag=1;
          printf("this is not prime");
          break;
      }
  }
    if(flag==0)
      {
          printf("this is a prime");
      }
    return 0;
}
