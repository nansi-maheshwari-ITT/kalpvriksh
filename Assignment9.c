#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, max;
    printf("Enter the size of array :");
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));  
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    max = *arr;
    for (i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    printf("Largest number in the array: %d\n", max);
    free(arr);  
}
