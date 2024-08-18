#include <stdio.h>

void arrangeEvenOdd(int arr[], int size) {
    int evenCount = 0, oddCount = 0;
    
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    
    int evenArr[evenCount], oddArr[oddCount];
    int evenIndex = 0, oddIndex = 0;
    

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenIndex++] = arr[i];
        } else {
            oddArr[oddIndex++] = arr[i];
        }
    }
    
   
    for (int i = 0; i < evenCount; i++) {
        arr[i] = evenArr[i];
    }
    for (int i = 0; i < oddCount; i++) {
        arr[evenCount + i] = oddArr[i];
    }
}

int main() {
    int arr[] = {1, 3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    arrangeEvenOdd(arr, size);
    
    printf("Array after arranging even numbers first:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
