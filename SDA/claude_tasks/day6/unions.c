#include <stdio.h>

union safe_nums {
    int a;
    double b;
};

struct num_container {
    int a;
    double b;
};

int main(int argc, char const *argv[])
{
    union safe_nums u;
    struct num_container s;

    printf("%zu %zu\n", sizeof(u), sizeof(s));
    printf("int: %zu\ndouble: %zu", sizeof(int), sizeof(double));
    return 0;
}
