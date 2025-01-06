#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    
    while (num) {
        count += num & 1;  // Increment count if the least significant bit is 1
        num >>= 1;          // Right shift num to check the next bit
    }
    
    return count;
}

int main() {
    int num = 30;  // Example number (29 in binary is 11101)
    printf("The number of set bits in %d is %d\n", num, countSetBits(num));
    return 0;
}
