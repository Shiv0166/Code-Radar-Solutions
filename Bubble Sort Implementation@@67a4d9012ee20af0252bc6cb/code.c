#include<stdio.h>  // 1. Includes the standard input/output library for using printf and scanf functions.

int main() {       // 2. The main function where the program execution starts. (Note: Use 'int main()' in standard C.)

    int i, j, n, a[50], temp;  
    // 3. Declares variables:
    //    - i, j: loop counters
    //    - n: number of elements in the array
    //    - a[50]: an array of 50 integers (for storing the elements)
    //    - temp: a temporary variable for swapping values

    printf("enter n:\n");  
    // 4. Prompts the user to input the size of the array.

    scanf("%d", &n);  
    // 5. Reads the integer value of 'n' (the number of elements) from the user.

    printf("enter array elements:\n");  
    // 6. Asks the user to input the elements of the array.

    for(i = 0; i < n; i++) {  
        // 7. A loop to take 'n' elements as input from the user.
        scanf("%d", &a[i]);  
        // 8. Reads each element and stores it in the array 'a'.
    }

    for(i = 0; i < n - 1; i++) {  
        // 9. Outer loop runs 'n-1' times to ensure the array gets fully sorted.
        for(j = 0; j < n - 1; j++) {  
            // 10. Inner loop compares adjacent elements.
            if (a[j] > a[j + 1]) {  
                // 11. If the current element is greater than the next one, they need to be swapped.
                temp = a[j];  
                // 12. Store the current element in 'temp'.
                a[j] = a[j + 1];  
                // 13. Move the next element to the current position.
                a[j + 1] = temp;  
                // 14. Assign the original current element (from 'temp') to the next position.
            }
        }
    }

    printf("\nThe sorted numbers are:\n");  

    for(i = 0; i < n; i++) {  
        printf("%d\t", a[i]);  
    }

}
