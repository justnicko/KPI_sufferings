#include <stdio.h>

#define ARRAY_SIZE 5

void rotateLeft(int[], int);
void printArray(int[], int);

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4, 5};
    
    printArray(nums, ARRAY_SIZE);
    rotateLeft(nums, ARRAY_SIZE);
    printArray(nums, ARRAY_SIZE);

    return 0;
}

void rotateLeft(int arr[], int length) {
    int T = arr[0];
    for (int i = 1; i < length; i++) {
        arr[i - 1] = arr[i];
    }
    arr[length - 1] = T;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
