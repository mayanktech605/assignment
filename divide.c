#include <stdio.h>
#include <stdlib.h>  // For abs()

// Function to divide a by b using subtraction and bitwise operations
int divide(int a, int b) {
    // Handle edge case when divisor is 0 (undefined operation)
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1;  // Error code
    }
    
    // Handle the case of negative numbers
    int sign = ((a < 0) ^ (b < 0)) ? -1 : 1; // Determine the sign of the result
    a = abs(a); // Work with positive numbers
    b = abs(b);
    
    int quotient = 0;
    
    // Shift the divisor until it's larger than the dividend
    for (int i = 31; i >= 0; i--) {
        // Check if divisor shifted by i bits is less than or equal to the dividend
        if ((b << i) <= a) {
            a -= (b << i);  // Subtract shifted divisor from the dividend
            quotient |= (1 << i);  // Set the corresponding bit in the quotient
        }
    }
    
    // Apply the sign of the result
    return sign * quotient;
}

int main() {
    int dividend, divisor;

    // Take input from the user
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Perform division
    int result = divide(dividend, divisor);

    if (result != -1) {  // If no error (division by zero)
        printf("Result of %d divided by %d is: %d\n", dividend, divisor, result);
    }

    return 0;
}
