#include <stdio.h>

void moveZerosToEnd(int arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    moveZerosToEnd(arr, size);
    printf("Array after moving zeros: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
