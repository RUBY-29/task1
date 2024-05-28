#include <stdio.h>  
  
int main() {  
   int num = 10;  
  
   if (num > 0) {  
      printf("The number is positive\n");  
   } else {  
      printf("The number is negative\n");  
   }  
  
   for (int i = 0; i < 5; i++) {  
      printf("%d\n", i);  
   }  
  
   int i = 0;  
   while (i < 5) {  
      printf("%d\n", i);  
      i++;  
   }  
  
   switch (num) {  
      case 0:  
         printf("The number is zero\n");  
         break;  
      case 10:  
         printf("The number is ten\n");  
         break;  
      default:  
         printf("The number is not zero or ten\n");  
         break;  
   }  
  
   return 0;  
}  
