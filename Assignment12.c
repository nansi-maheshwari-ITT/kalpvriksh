#include <stdio.h>

void findFactorial(int num, int *fact) {
    int i;
    *fact = 1;
    for (i = 1; i <= num; i++) {
        *fact *= i;
    }
}

int main() {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    findFactorial(num, &fact);
    printf("Factorial of %d is %d\n", num, fact);
}
