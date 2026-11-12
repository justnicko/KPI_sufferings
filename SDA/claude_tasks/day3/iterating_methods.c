#include <stdio.h>

#define ARRAY_SIZE 5

int main(int argc, char const *argv[])
{
    double nums[] = {11.2, 123, -1, 0, 1245.6789};
    double *p = nums;
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%f ", nums[i]);
    }

    printf("\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%f ", *(nums + i));
    }

    printf("\n");

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%f ", *(p++));
    }

    return 0;
}
