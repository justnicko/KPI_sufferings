#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c = getchar();
    /* code */
    while (c != EOF) {
        putchar(c);
        if (c == 32) {
            do {
                c = getchar();
            } while (c == 32);
        } else {
            c = getchar();
        }
    } ;
    return 0;
}
