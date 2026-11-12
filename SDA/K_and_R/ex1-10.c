#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c;

  do {
    c = getchar();
    switch (c) {
      case '\t':
        putchar('\\');
        putchar('t');
        break;
      case '\b':
        putchar('\\');
        putchar('b');
        break;
      case '\\':
        putchar('\\');
        putchar('\\');
        break;
      default:
        putchar(c);
        break;
    }
  } while (c != EOF);


  return 0;
}
