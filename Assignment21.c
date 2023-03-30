#include <stdio.h>

int main() {
    char *ptr_alphabets = "abcdefghijklmnopqrstuvwxyz";

    while (*ptr_alphabets != '\0') {
        printf("%c ", *ptr_alphabets);
        ptr_alphabets++;
    }
}
