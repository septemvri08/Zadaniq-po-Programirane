#include <stdio.h>
#define SWAP(A, B, TYPE) do { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} while (0)
#define SORT(ARRAY, SIZE, TYPE, COMPARE) do { \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = 0; j < SIZE - i - 1; j++) { \
            if (ARRAY[j] COMPARE ARRAY[j + 1]) { \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            } \
        } \
    } \
} while (0)

int main() {
    int intArray[] = {5, 2, 9, 1, 5};
    int size = sizeof(intArray) / sizeof(intArray[0]);

    printf("Before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    SORT(intArray, size, int, >);

    printf("After sorting in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    double doubleArray[] = {3.14, 1.1, 2.71, 0.5, 5.0};
    size = sizeof(doubleArray) / sizeof(doubleArray[0]);

    printf("Before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%lf ", doubleArray[i]);
    }
    printf("\n");

    SORT(doubleArray, size, double, <);

    printf("After sorting in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%lf ", doubleArray[i]);
    }
    printf("\n");

    return 0;
}