#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 4, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res[n]; 
    int k = 0; 

    
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        
        if (!is_duplicate) {
            res[k] = arr[i];
            k++;
        }
    }

    printf("Resultant Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    return 0;
}

