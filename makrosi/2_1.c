#include <stdio.h>

#define SWAP(A, B, TYPE) do { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} while (0)

int main() {
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y, int);
    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 3.14;
    double b = 2.71;

    printf("Before swap: a = %lf, b = %lf\n", a, b);
    SWAP(a, b, double);
    printf("After swap: a = %lf, b = %lf\n", a, b);

    return 0;
}