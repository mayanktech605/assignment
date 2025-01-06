#include <stdio.h>
#include <math.h>

// Function to print the power set of a set
void printPowerSet(int set[], int setSize) {
    // Total number of subsets in the power set is 2^setSize
    unsigned int powerSetSize = pow(2, setSize);

    // Iterate over all possible subsets (from 0 to 2^n - 1)
    for (unsigned int subsetMask = 0; subsetMask < powerSetSize; subsetMask++) {
        printf("{ ");
        
        // Check each bit of the subsetMask
        for (int i = 0; i < setSize; i++) {
            // If the ith bit of subsetMask is set (i.e., 1), include set[i]
            if (subsetMask & (1 << i)) {
                printf("%d ", set[i]);
            }
        }

        printf("}\n");
    }
}

int main() {
    int set[] = {1, 2, 3};  // Example set
    int setSize = sizeof(set) / sizeof(set[0]);  // Calculate the number of elements in the set

    printf("Power Set of the given set:\n");
    printPowerSet(set, setSize);  // Generate and print the power set

    return 0;
}
