#include <stdio.h>

int *modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = modifyArray(arr, 5);
    printf("Modified array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
}
