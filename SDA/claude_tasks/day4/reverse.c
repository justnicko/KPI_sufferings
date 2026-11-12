#include <stdio.h>

#define ARRAY_SIZE 5

void reverse(int[], int);
void printArray(int[], int);

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4, 5};
    
    printArray(nums, ARRAY_SIZE);
    reverse(nums, ARRAY_SIZE);
    printArray(nums, ARRAY_SIZE);

    return 0;
}

void printArray(int arr[], int length) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void reverse(int arr[], int length) {
    int T, i = 0, j = length - 1;

    do {
        T = arr[i];
        arr[i] = arr[j];
        arr[j] = T;
    } while (--j > ++i);
}

