#include <stdio.h>

int countNotEqual(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != key) count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4};
    int key = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Count of elements not equal to %d: %d\n", key, countNotEqual(arr, size, key));
    return 0;
}
