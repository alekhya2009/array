#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0;
    int j = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize = removeDuplicates(arr, size);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
