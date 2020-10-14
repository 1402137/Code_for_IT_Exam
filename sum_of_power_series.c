// find the sum of the series 1/a + 2/a^2 + 3/a^3 + … + n/a^n.
#include <stdio.h>


int power_function (int a,int n)
{
    int i; /* Variable used in loop counter */
    int number = 1;

    for (i = 0; i < n; ++i)  
        number *= a;
  
    return number;
}
float func(int a ,int n){
    float sum=0;
    int i; 
    for ( i = 1; i <= n; i++)
    {   int powerValue=power_function(a,i); 
       
        sum += (float)i/(float)powerValue; 
         

      
    }
    return sum;

}
int main() {
    int a, n;
    printf ("Enter the value of a and n :");
    scanf("%d %d",&a,&n);
    printf(" the sum is %.3f",func(a,n));
    return 0;
}

