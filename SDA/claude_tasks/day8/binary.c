#include <stdio.h>

#define ARR_LENGTH 1000
#define SEARCHED_VALUE 0

int binary_search(int value, int arr[], int arr_length);
int linear_search(int value, int arr[], int arr_length);

int main(int argc, char const *argv[])
{
    int nums[ARR_LENGTH];
    for (int i = 0; i < ARR_LENGTH; i++) {
        nums[i] = i;
    }

    printf("%d\n", linear_search(SEARCHED_VALUE, nums, ARR_LENGTH));
    printf("%d\n", binary_search(SEARCHED_VALUE, nums, ARR_LENGTH));
    return 0;
}

int binary_search(int value, int arr[], int arr_length)
{
    int from_index = 0;
    int to_index = arr_length - 1;
    int iterations = 0;
    int checks = 0;

    do {
        int selected = (from_index + to_index) / 2;
        // printf("%d: %d < %d < %d\n", ++iterations,  from_index, selected, to_index);
        if (arr[selected] == value) {
            printf("value found at index %d. relative checks: %d\n", selected, checks);
            return selected;
        } else if (arr[selected] < value) {
            from_index = selected + 1;
        } else {
            to_index = selected - 1;
        }

        checks += 3;
    } while (from_index <= to_index);

    printf("value not found. relative checks: %d\n", checks);
    return -1;
}

int linear_search(int value, int arr[], int arr_length)
{
    int checks = 0;
    for (int i = 0; i < arr_length; i++) {
        checks += 2;
        if (arr[i] == value) {
            printf("value found at index %d. relative checks: %d\n", arr[i], checks);
            return i;
        }
    }
    
    printf("value not found. relative checks: %d\n", checks);
    return -1;
}