#include <stdio.h>

int isPowerOfTwo(int n) {
    // Check if n is greater than 0 and n & (n - 1) == 0
    return (n > 0) && (n & (n - 1)) == 0;
}

int main() {
    int num;
    
    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is a power of two
    if (isPowerOfTwo(num)) {
        printf("%d is a power of two.\n", num);
    } else {
        printf("%d is not a power of two.\n", num);
    }

    return 0;
}
