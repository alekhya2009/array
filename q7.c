#include <stdio.h>
#include <string.h>

int isSubstring(char *str1, char *str2) {
    return strstr(str1, str2) != NULL;
}

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "world";
    if (isSubstring(str1, str2)) {
        printf("'%s' is a substring of '%s'\n", str2, str1);
    } else {
        printf("'%s' is not a substring of '%s'\n", str2, str1);
    }
    return 0;
