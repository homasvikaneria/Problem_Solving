// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].
#include <stdio.h>
#include <string.h>

int main() {
   int arr[] = {4, 2, 8, 5, 1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int i, j,temp;
   for (i=0;i<n-1;i++){
       for (j=0;j<n-1-i;j++) { 
           if (arr[j]>arr[j+1]) {
               // Swap using a temporary variable
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
}
 // Print the sorted array
    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element
    }
    printf("\n"); // New line after printing the array
    return 0;
}