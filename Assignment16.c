#include <stdio.h>

int arraySum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = arraySum(arr, 5);
    printf("Sum of array elements: %d", sum);
}
