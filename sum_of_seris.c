
// C program to find sum of series 
#include <stdio.h> 
  
// Function to return sum of 1/1 + 1/2 + 1/3 + ..+ 1/n 
double sum_ofSeries(int n) 
{ 
  double i, sum = 0.0; 
  for (i = 1; i <= n; i++) 
      sum = sum + 1/i; 
  return sum; 
} 
  
int main() 
{ 
    int n;
    printf("please enter the  value of N: ");
    scanf("%d",&n);
    printf("Sum is %f", sum_ofSeries(n)); 
    return 0; 
}