#include <stdio.h>

void findTwoNonRepeatingElements(int arr[], int n) {
    int xorResult = 0;

    // Step 1: XOR all elements to get xorResult = a ^ b
    for (int i = 0; i < n; i++) {
        xorResult ^= arr[i];
    }

    // Step 2: Find the rightmost set bit in xorResult
    int setBit = xorResult & -xorResult;  // This isolates the rightmost set bit

    // Step 3: Divide elements into two groups based on the set bit
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & setBit) {
            num1 ^= arr[i];  // XOR elements with the set bit
        } else {
            num2 ^= arr[i];  // XOR elements without the set bit
        }
    }

    // num1 and num2 now hold the two non-repeating elements
    printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {4, 5, 7, 5, 4, 9};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    findTwoNonRepeatingElements(arr, n);

    return 0;
}
