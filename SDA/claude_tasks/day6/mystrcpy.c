#include <stdio.h>

void my_strcpy(char *dst, const char* src);

int main(int argc, char const *argv[])
{
    char *input;
    char copy[100];
    scanf("%[^\n]", input);
    printf("%s", input);
    my_strcpy(copy, input);
    printf("%s", copy);

    return 0;
}

void my_strcpy(char *dst, const char* src)
{
    int count = 0;
    while (*(src + count) != '\0') {
        *(dst + count) = *(src + count);
        count++;
    }
}