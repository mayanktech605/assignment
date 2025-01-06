#include <stdio.h>

// Function to find the position of the only set bit in a number
int findPositionOfSetBit(int n) {
    // Check if n is zero or has more than one set bit
    if (n == 0) {
        return -1;  // Invalid input, no set bit
    }
    
    // Use __builtin_ctz to count trailing zeros (position of the set bit)
    return __builtin_ctz(n) + 1;  // Add 1 because position is 1-based
}

int main() {
    int num;
    
    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find and print the position of the only set bit
    int position = findPositionOfSetBit(num);
    
    if (position == -1) {
        printf("The number is either zero or has more than one set bit.\n");
    } else {
        printf("The position of the only set bit in %d is: %d\n", num, position);
    }
    
    return 0;
}
