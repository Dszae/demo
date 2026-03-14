#include <stdio.h>

// Swap two numbers without using a third variable (arithmetic method).
// Note: both values must be in a range where their sum does not overflow int.
void swap_arithmetic(int *a, int *b) {
    if (a == b) return;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Swap two numbers without using a third variable (XOR method).
void swap_xor(int *a, int *b) {
    if (a == b) return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap_arithmetic(&x, &y);
    printf("After swap (arithmetic): x = %d, y = %d\n", x, y);

    // Swap back using XOR
    swap_xor(&x, &y);
    printf("After swap (XOR): x = %d, y = %d\n", x, y);

    return 0;
}
