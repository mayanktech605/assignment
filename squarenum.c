#include <stdio.h>

int squareUsingShift(int n) {
    return (n << 1) * n;  // Left shift n by 1 and multiply by n
}

int main() {
    int num;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and print the square of the number
    int result = squareUsingShift(num);
    printf("The square of %d is: %d\n", num, result);

    return 0;
}
