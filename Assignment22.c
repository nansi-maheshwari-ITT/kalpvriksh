#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char *ptr_str;

    printf("Enter a string: ");
    scanf("%s", str);
    ptr_str = str + strlen(str) - 1;
    printf("Reversed string: ");
    while (ptr_str >= str) {
        printf("%c", *ptr_str);
        ptr_str--;
    }
}
