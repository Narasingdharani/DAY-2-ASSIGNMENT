#include <stdio.h>

int main() {
    int arr[] = {2, 5, 7, 10, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even[n], odd[n];
    int even_index = 0, odd_index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_index] = arr[i];
            even_index++;
        } else {
            odd[odd_index] = arr[i];
            odd_index++;
        }
    }

    printf("Even elements: ");
    for (int i = 0; i < even_index; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd elements: ");
    for (int i = 0; i < odd_index; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

