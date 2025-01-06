#include <stdio.h>

int countSetBits(int n) {
    int count = 0;

    // Iterate over each bit position
    for (int i = 0; i < 32; i++) {
        // For each bit position i, calculate how many times it is set
        int blockSize = 1 << (i + 1); // block size for the current bit position (2^(i+1))
        int fullBlocks = n / blockSize; // How many complete blocks of size blockSize fit in the range 0 to n

        // Count the set bits in full blocks
        count += fullBlocks * (blockSize / 2);

        // Check if there are any leftover numbers after the full blocks
        int remainder = n % blockSize;
        if (remainder >= (blockSize / 2)) {
            count += remainder - (blockSize / 2) + 1;
        }
    }

    return count;
}

int main() {
    int n;
    // Take input from the user
    printf("Enter a number n: ");
    scanf("%d", &n);

    // Count the total number of set bits in numbers from 1 to n
    int totalSetBits = countSetBits(n);

    // Output the result
    printf("Total number of set bits in all numbers from 1 to %d is: %d\n", n, totalSetBits);

    return 0;
}
