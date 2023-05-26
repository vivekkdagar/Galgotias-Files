// Aim: Implement bubble sort to sort numbers in ascending order

#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int lastUnsortedIndex = size - 1; lastUnsortedIndex > 0; lastUnsortedIndex--) {
        for (int i = 0; i < lastUnsortedIndex; i++) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
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
    bubbleSort(arr, size);

    // Print array after sorting
    printf("\nArray after sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
