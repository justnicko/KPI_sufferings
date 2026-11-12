#include <stdio.h>

int my_strcmp(char *s1, char *s2);

int main(int argc, char const *argv[])
{
    char *input1, *input2;
    printf("first input: ");
    scanf("%s", input1);
    printf("second input: ");
    scanf("%s", input2);
    printf("%d", my_strcmp(input1,  input2));
    return 0;
}

int my_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2) {
        if (*s1 == '\0' || *s2 == '\0') {
            break;
        }

        s1++;
        s2++;
    }

    return *s1 - *s2;
}