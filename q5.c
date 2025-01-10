#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWords(char *str) {
    char *words[100];
    int count = 0;

    char *token = strtok(str, " ,.");
    while (token) {
        words[count++] = token;
        token = strtok(NULL, " ,.");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s%s", words[i], i > 0 ? " " : "\n");
    }
}

int main() {
    char str[] = "Hello, world. Welcome to C!";
    reverseWords(str);
    return 0;
}
