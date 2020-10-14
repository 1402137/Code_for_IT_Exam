//the armstrong number  is the sum of cubes of each digit is equal to the number itself like,370=3*3*3+7*7*7+1*181
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