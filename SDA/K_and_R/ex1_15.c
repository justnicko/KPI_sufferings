#include <stdio.h>

float CToF(float);

int main(int argc, char const *argv[])
{
    int lower = 0;
    int upper = 200;
    int step = 10;

    printf("Celcius to Farenheit\n");
    printf("%6s %6s\n", "C", "F");

    for (float celcius = upper; celcius >= lower; celcius -= step) {
        printf("%6.2f %6.2f\n", celcius, CToF(celcius));
    }

    return 0;
}

float CToF(float celcius) {
    return celcius * (9./5.) + 32;
}
