#include <stdio.h>
#include <string.h>

void count_vowels_consonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || 
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            (*vowels)++;
        }
        else {
            (*consonants)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;
    printf("Enter a string: ");
    gets(str);
    count_vowels_consonants(str, &vowels, &consonants);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}
