#include <stdio.h>

void reverseArray(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array elements in reverse order: ");
    reverseArray(arr, 5);
}
