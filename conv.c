//code by viswa srihas
//7oct 2026

#include <stdio.h>

// Function that takes an integer and prints its binary form
void printBinary(int n) {
    // Determine how many bits an integer takes on your system (usually 32 bits)
    int num_bits = sizeof(int) * 8;

    printf("Binary of %d: ", n);

    // Loop from the highest bit down to the lowest bit
    for (int i = num_bits - 1; i >= 0; i--) {
        // 1. Shift the bits to the right by 'i' positions
        // 2. Use bitwise '& 1' to isolate the last bit (0 or 1)
        int bit = (n >> i) & 1;
        
        printf("%d", bit);

        // Add a space every 4 bits to make it easier to read
        if (i % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    printBinary(5);   // Test with 5
    printBinary(3);   // Test with 3
    printBinary(42);  // Test with a larger number

    return 0;
}

