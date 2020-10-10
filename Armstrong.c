//the armstrong number  is the sum of cubes of each digit is equal to the number itself
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}