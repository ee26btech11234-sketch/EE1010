//y.viswa srihas
//7-10-26

#include <stdio.h>

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    // 1. Bitwise AND (&)
    // Looks at the actual bits: 0101 & 0011 = 0001 (which is 1)
    int bitwise_result = a & b;

    // 2. Logical AND (&&)
    // Asks: "Are BOTH a and b greater than 0?" (Yes, both are true/1)
    int logical_result = (a > 0) && (b > 0);

    // Print the results
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("----------------------------------\n");
    printf("1. Bitwise (&) result:  %d & %d = %d\n", a, b, bitwise_result);
    printf("2. Logical  (&&) result: (a > 0) && (b > 0) = %d\n", logical_result);

    return 0;
}

