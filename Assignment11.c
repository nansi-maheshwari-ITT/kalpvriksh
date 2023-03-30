#include <stdio.h>

void swap(int *x, int *y, int *z) {
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main() {
    int a[3] = {5, 10, 15};
    printf("Before swapping: a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
    swap(&a[0], &a[1], &a[2]);
	printf("After swapping: a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
}
