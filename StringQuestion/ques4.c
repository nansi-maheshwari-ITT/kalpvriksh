#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int maxLength = 0;
    int start = 0;
    int visited[256] = {0};

    for (int i = 0; i < len; i++) {
        if (visited[str[i]] == 1) {
            while (str[start] != str[i]) {
                visited[str[start]] = 0;
                start++;
            }
            start++;
        }
        else {
            visited[str[i]] = 1;
            int currLength = i - start + 1;
            if (currLength > maxLength) {
                maxLength = currLength;
            }
        }
    }

    printf("Length of longest substring without repeating characters: %d", maxLength);
    return 0;
}
