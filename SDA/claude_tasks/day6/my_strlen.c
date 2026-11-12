#include <stdio.h>

int my_strlen(const char *s);

int main(int argc, char const *argv[])
{
    char *input;
    scanf("%[^\n]", input);
    printf("%d", my_strlen(input));

    return 0;
}

int my_strlen(const char *s) {
    int count = 0;
    char *current_s = s;
    while (*current_s != '\0') {
        count++;
        current_s += 1;
    }

    return count;
}