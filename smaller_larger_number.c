#include <stdio.h>
int main() {
    int i, n;
    int arr[100];
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
   // int array_element=sizeof(arr)/sizeof(int);  //for see the size of array
 
    // storing the largest number to arr[0]
    // for (i = 1; i < n; ++i) { //for first large element
    //     if (arr[0] < arr[i])
    //         arr[0] = arr[i];
    // }
      
     for ( i = 0; i < n; i++)
     {
         for (int j = i+1; j < n; j++)
         {
             if (arr[i]<arr[j])
             {
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
             
         }
         
     }
      
        
    printf("Largest element = %d \n", arr[0]);
    printf("2nd Largest element = %d", arr[1]);

    printf("\nElements of array in ascending order: ");
    for (i = 0; i < n; i++)
    {
       
        printf("%d\t",arr[i]);
    }
    
    return 0;
}