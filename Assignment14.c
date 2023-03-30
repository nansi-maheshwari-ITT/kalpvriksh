#include <stdio.h>

void sort(int *arr, int size) {
    int i, j, temp;

    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(*(arr + j) < *(arr + i)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 3, 8, 4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Array before sorting:\n ");
    for(i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    sort(arr, size);
    printf("Array after sorting: ");
    for(i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}
