#include <stdio.h>

void findMaxNumber(int *x, int *y, int *max){
	 if (*x > *y) {
        *max = *x;
    } else {
        *max = *y;
    }
}

int main() {
    int num1, num2;
    int max;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    findMaxNumber(&num1, &num2, &max);

    printf("The maximum number between %d and %d is %d\n", num1, num2, max);

    return 0;
}

