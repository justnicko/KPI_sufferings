#include <stdio.h>

int gcd(int, int);

int main(int argc, char const *argv[])
{
    printf("%d", gcd(9, 5));
    return 0;
}

int gcd(int a, int b) {
    if (a < b) {
        int c = a;
        a = b;
        b = c;
    }

    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}