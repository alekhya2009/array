#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mergeStrings(char *str1, char *str2, char *outputFile) {
    FILE *file = fopen(outputFile, "w");
    int i = 0, j = 0;
    while (str1[i] && str2[j]) {
        fputc(str1[i++], file);
        fputc(str2[j++], file);
    }
    while (str1[i]) fputc(str1[i++], file);
    while (str2[j]) fputc(str2[j++], file);
    fclose(file);
}

int main() {
    char str1[] = "abc";
    char str2[] = "12345";
    mergeStrings(str1, str2, "file3.txt");
    printf("Merged string written to file3.txt\n");
    return 0;
}
