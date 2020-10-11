#include<stdio.h>
//long int multiplyNumbers(int n);

long int faact(int n) {
    if (n>=1)
        return n*faact(n-1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, faact(n));
    return 0;
}
