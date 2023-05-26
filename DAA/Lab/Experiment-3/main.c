// Aim: Implement insertion sort

#include <stdio.h>

void insertionSort(int arr[], int size) {
    for (int firstUnsortedIndex = 1; firstUnsortedIndex < size; firstUnsortedIndex++) {
        int t = arr[firstUnsortedIndex], j = firstUnsortedIndex;
        while (j > 0 && arr[j - 1] > t) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = t;
    }
}

int main() {
    // Take array size from user input
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare array and take its elements from user input
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array before sorting
    printf("Array before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Sort array
    insertionSort(arr, size);

    // Print array after sorting
    printf("\nArray after sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
