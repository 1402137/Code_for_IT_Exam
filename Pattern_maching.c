#include <stdio.h>
//#include <stdlib.h>
//
  x  
 XXX
XXXXX



//


int main()
{
    int n=3,k=-1;
    for(int i=1;i<=n;i++){
            k+=2;
        for(int j=1;j<=5;j++){

            if(i+j>n && i+j<=n+k){
                printf("X");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");


    }
}
