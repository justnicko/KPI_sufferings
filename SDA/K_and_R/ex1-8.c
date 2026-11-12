#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c, count = 0;

  do {
    c = getchar();
    if (c == '\t' || c == ' ' || c == '\n') {
      count++;
    }
  } while (c != EOF);

  printf("\nresult: %d", count);
  return 0;
}
