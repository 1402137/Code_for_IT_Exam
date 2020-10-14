#include<stdio.h>
int main() {
    int binary,weight=1,decimal=0,rem;

    printf("Enter the binary number");
    scanf("%d",&binary);
    int temp_binary=binary;  // for temporaly input store
   
    while (binary !=0)
    {   

        rem=binary%10;
        decimal +=rem*weight;   //for binary to deccimal
        binary =binary /10;
        weight *= 2;
        
    }
     
    printf("decimal of %d is %d:",temp_binary,decimal);  //binary to decimal
    return 0;
}