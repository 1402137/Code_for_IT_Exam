//LCM : smallest positive integer that is perfectly divisible by both numbers
//The HCF or GCD of two integers is the largest integer that can exactly divide both numbers (without a remainder).

#include <stdio.h>

 /*long is equivalent to long int, here wee use long bcz of range,  
     int: 0 to 65,535. long int: -2,147,483,647 to 2,147,483,647 */
long gcd(long, long);

int main() {
  long num1, num2, hcf, lcm;

  printf("Enter two integers\n");
  scanf("%ld%ld", &num1, &num2);

  hcf = gcd(num1,num2);
  lcm = (num1*num2)/hcf;

  printf("Greatest common divisor of %ld and %ld = %ld\n", num1, num2, hcf);
  printf("Least common multiple of %ld and %ld = %ld\n", num1, num2, lcm);

  return 0;
}

long gcd(long a, long b) {  //using recursion
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}