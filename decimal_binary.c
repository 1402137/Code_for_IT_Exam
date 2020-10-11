#include <stdio.h>

int main() {
   long number, d, rem, binaryarray[100],i=0;
   number=10;
   d = number;
   int temp = 1;

   while (number!=0) {
      rem = number%2;
      number = number / 2;
      binaryarray[i]=rem;
      i++;
      
   }
   for (int j = i-1; j >=0 ; j--)
   {
       printf("%ld", binaryarray[j]);
   }
   
   
   return 0;
}