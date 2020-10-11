#include <stdio.h>
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