#include <stdio.h>

int main() {
   int low, high, i, flag,count=0;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &low, &high);
   printf("Prime numbers between %d and %d are: ", low, high);
   int low_temp=low;
   // iteration until low is not equal to high
   while (low < high) {
      flag = 0;

      // ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // if low is a non-prime number, flag will be 1
      for (i = 2; i <= low / 2; ++i) {

         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0){
         printf("%d ", low);
         count +=1;
      }
      // to check prime for the next number
      // increase low by 1
      ++low;
   }
   printf("total-prime number between %d to % d is %d :",low_temp,high,count);
   return 0;
}