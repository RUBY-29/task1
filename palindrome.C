
#include <stdio.h>

int main() {
   int i,n,copy,rev;
   printf("enter n:");
   scanf("%d",&n);
   copy=n;
   while(copy>0)
   {
       rev=rev*10;
       rev=rev+(copy%10);
       copy=copy/10;
   }
   if(n==rev)
   {
       printf("this is palindrome");
   }
   else
   {
       printf("not palindrome");
   }
    return 0;
}
