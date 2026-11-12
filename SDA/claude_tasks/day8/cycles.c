#include <stdio.h>

#define n 64

int main(int argc, char const *argv[])
{
    int iterations = 0;
    for (int i = 0; i < n; i++) {
        iterations++;
    }

    printf("%d\n", iterations);

    iterations = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            iterations++;
        }
    }

    printf("%d\n", iterations);

    iterations = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            iterations++;
        }
    }

    printf("%d\n", iterations);

    return 0;
}
