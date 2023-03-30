#include <stdio.h>

union my_union {
    int i;
    float f;
    char c;
};

int main() {
    union my_union u;
    u.i = 10;
    union my_union *ptr = &u;
    printf("Value of i: %d\n", u.i);
    printf("Value of i using pointer: %d\n", ptr->i);

    ptr->f = 3.14;
    printf("Value of f using pointer: %f\n", ptr->f);

    ptr->c = 'A';
    printf("Value of c using pointer: %c\n", ptr->c);

    return 0;
}
