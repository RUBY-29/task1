
#include <stdio.h>

int main() {
    int year,count=0;
    printf("enter year:");
    scanf("%d", &year);
    
    while(year!=0)  
   {  
       year=year/10;  
       count++;  
   } 
   
   if(count==4)
   {
      if(year%400==0)
      {
          printf("this is  leap year \n",year);
      }
          else if(year%100==0)
      {
          printf("this is not leap year \n",year);
      }
      else if(year%4==0)
      {
          printf("this is  leap year \n",year);
      }
     else
     {
         printf("this is not leap year \n",year);
     }
   }
   else
   {
       printf("this not considered as year \n",year);
   }
   
    return 0;
}
