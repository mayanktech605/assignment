#include <stdio.h>

// Function to count the number of set bits (1s) in an integer using Brian Kernighan's algorithm
int countSetBits(int n) {
    int count = 0;
    
    // Count set bits by repeatedly removing the rightmost set bit
    while (n) {
        count++;
        n = n & (n - 1);  // Removes the rightmost set bit
    }
    
    return count;
}

// Function to count the number of bits to be flipped to convert A to B
int countBitsToFlip(int A, int B) {
    // XOR A and B to find differing bits
    int xorResult = A ^ B;
    
    // Count the number of set bits in the XOR result
    return countSetBits(xorResult);
}

int main() {
    int A, B;
    
    // Take input from the user
    printf("Enter two integers (A and B): ");
    scanf("%d %d", &A, &B);
    
    // Count the number of bits to be flipped
    int result = countBitsToFlip(A, B);
    
    // Output the result
    printf("Number of bits to flip to convert %d to %d is: %d\n", A, B, result);
    
    return 0;
}
