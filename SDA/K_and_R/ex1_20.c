#include <stdio.h>
#define TAB_SIZE 8

int main(int argc, char const *argv[])
{
    int i, c, count = 0, spaces;
    /* code */
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                spaces = TAB_SIZE - count % TAB_SIZE;
                for (i = 0; i < spaces; i++) {
                    putchar(' ');
                    count++;
                }
                break;
            case '\n':
                putchar(c);
                count = 0;
                break;
            default:
                putchar(c);
                count++;
                break;
        }
    }
    return 0;
}
