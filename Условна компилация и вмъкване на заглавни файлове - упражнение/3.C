#include <stdio.h>

#ifdef _WIN32
// Сортиране с метода на мехурчето за Windows
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
#elif defined(__linux__)
// Сортиране с метода на пряката селекция за Linux
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
#elif defined(__APPLE__)
// Сортиране с метода на прякото вмъкване за MacOS
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
#else
// Обръщане на масива, ако операционната система не съвпада с изброените
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
#endif

int main() {
    int arr[] = {4, 2, 7, 1, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

#ifdef _WIN32
    printf("Sorting using Bubble Sort (Windows):\n");
    bubbleSort(arr, n);
#elif defined(__linux__)
    printf("Sorting using Selection Sort (Linux):\n");
    selectionSort(arr, n);
#elif defined(__APPLE__)
    printf("Sorting using Insertion Sort (MacOS):\n");
    insertionSort(arr, n);
#else
    printf("Reversing the array (Unknown OS):\n");
    reverseArray(arr, n);
#endif

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
