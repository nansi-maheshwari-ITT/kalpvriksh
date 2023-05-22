#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, count;
    printf("Enter a string: ");
   scanf("%[^\n]s", str);
    len = strlen(str);
    printf("Repeated characters are: ");
    for (i = 0; i < len; i++) {
        count=1;
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j] && str[i] != '\0') {
                str[j] = '\0';
               count++;
               continue;
            }
        }
        if(count>1){
           printf("%c is the first character that appears %d times", str[i],count);
           return;
        }
    }
    printf("No char repeats");
    return 0;
}
