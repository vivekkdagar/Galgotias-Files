// Aim: Implement binary search

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

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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

    // key to search
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Sort array
    bubbleSort(arr, size);

    // Search key in array
    int index = binarySearch(arr, size, key);
    
    if (index == -1)
        printf("Key not found\n");
    else
        printf("Key found at index %d\n", index);
}
