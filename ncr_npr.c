/*
nPr = n!/(n-r)!

nCr= n!/ (r! (n-r)!)



*/

#include <stdio.h>
 /*long is equivalent to long int, here wee use long bcz of range,  
     int: 0 to 65,535. long int: -2,147,483,647 to 2,147,483,647 */
 long factorial(int n) {
    
   int c;
   long result = 1;
 
   for (c = 1; c <= n; c++)
      result = result*c;
 
   return result;
}


long find_ncr(int n, int r) {
   long result;
   
   result = factorial(n)/(factorial(r)*factorial(n-r));
   
   return result;
}
 
long find_npr(int n, int r) {
   long result;
   
   result = factorial(n)/factorial(n-r);
   
   return result;
}
 



int main()
{
   int n, r;
   long ncr, npr;
 
   printf("Enter the value of n and r\n");
   scanf("%d%d",&n,&r);
   
   ncr = find_ncr(n, r);
   npr = find_npr(n, r);
   
   printf("%dC%d = %ld\n", n, r, ncr);
   printf("%dP%d = %ld\n", n, r, npr);
 
   return 0;
}

