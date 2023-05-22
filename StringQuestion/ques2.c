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
        if(str[i]!='/0' && str[i]!=' '){
          for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                str[j] = '\0';
               count++;
            }
        }   
        }
       
        if(str[i]!='\0' && str[i]!=' '){
            printf("%c appears %d times\n",str[i],count);
        }
        
    }
    return 0;
}