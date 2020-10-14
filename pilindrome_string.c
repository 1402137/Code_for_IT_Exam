//A palindrome number/string is a number/string that is equal to its reverse
#include<stdio.h>
#include <string.h>

   int main(){
      
      char string1[100];
      printf("Enter a string for pilindrome check :");
      gets(string1);
      int i, length;
      int flag = 0;
      length = strlen(string1);
      for(i=0;i < length ;i++){
         if(string1[i] != string1[length-i-1]) {
            flag = 1;
            break;
         }
      }
      if (flag==1){
         printf(" string is not a palindrome");
      } else {
         printf(" string is a palindrome");
      }
      return 0;
   }
