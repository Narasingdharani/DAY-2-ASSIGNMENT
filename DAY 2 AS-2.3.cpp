#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void findSecondLargestAndSmallest(int arr[], int n) {
    sortArray(arr, n);
    int secondLargest = arr[1];
    int smallest = arr[n-1];
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[0]) {
            smallest = arr[i];
            break;
        }
    }
    printf("Second largest element: %d\n", secondLargest);
    printf("Smallest element: %d\n", smallest);
    float avg = (secondLargest + smallest) / 2.0;
    printf("Average of second largest and smallest element: %.2f\n", avg);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == avg) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("The average of second largest and smallest element is present in the array.\n");
    } else {
        printf("The average of second largest and smallest element is not present in the array.\n");
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findSecondLargestAndSmallest(arr, n);
    return 0;
}

