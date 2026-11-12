#include <stdio.h>

void swap(int *a, int *b);

int main(int argc, char const *argv[])
{
    int a = 5, b = 10;
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}

void swap(int *a, int *b) {
    int c = *b;
    *b = *a;
    *a = c;
}