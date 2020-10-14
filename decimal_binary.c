#include <stdio.h>



int main() {
    /*long is equivalent to long int, here wee use long bcz of range,  
     int: 0 to 65,535. long int: -2,147,483,647 to 2,147,483,647 */
   long number, d, rem, binaryarray[100],i=0;
   printf("enter a decimal value");
   scanf("%ld",&number);
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