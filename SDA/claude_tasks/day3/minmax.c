#include <stdio.h>

#define ARRAY_SIZE 6

void minmax(double *max, double *min, double array[], int array_size);

int main(int argc, char const *argv[])
{
    /* code */
    double nums[] = {11.2, 123, -1, 0, 0, 1245.6789};
    double max, min;

    minmax(&max, &min, nums, ARRAY_SIZE);
    printf("max: %f, min: %f\n", max, min);

    return 0;
}

void minmax(double *max, double *min, double array[], int array_size) {
    *max = array[0];
    *min = array[0];
    
    for (int i = 0; i < array_size; i++) {
        if (*max < array[i]) {
            *max = array[i];
        } else if (*min > array[i]) {
            *min = array[i];
        }
    }
}