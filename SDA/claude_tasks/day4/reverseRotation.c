#include <stdio.h>

#define ARRAY_SIZE 5

void reverse(int[], int);
void rotate_array(int[], int, int);
void print_array(int[], int);

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4, 5};
    
    print_array(nums, ARRAY_SIZE);
    rotate_array(nums, 6, ARRAY_SIZE);
    print_array(nums, ARRAY_SIZE);

    return 0;
}

void rotate_array(int arr[], int k, int length) {
    k %= length;
    
    if (k < 1) {
        return;
    }

    reverse(arr, k);
    reverse(&arr[k], length - k);
    reverse(arr, length);
}

void print_array(int arr[], int length) {
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
