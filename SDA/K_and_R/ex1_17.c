#include <stdio.h>
#define MAXLENGTH 1000

int getline(char line[], int limit);

int main(int argc, char const *argv[])
{
    /* code */
    char currentLine[MAXLENGTH];
    int len;

    while ((len = getline(currentLine, MAXLENGTH)) > 0) {
        if (len > 80) {
            printf("%d: %s\n", len, currentLine);
        }
    }

    

    return 0;
}

int getline(char line[], int limit) {
    int i, c;

    for (i = 0; (i < limit - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i - 1;
}