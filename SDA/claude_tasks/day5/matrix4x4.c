#include <stdio.h>

#define MATRIX_SIZE 4

int main(int argc, char const *argv[])
{
  int nums[MATRIX_SIZE][MATRIX_SIZE];

  for (int i = 0; i < MATRIX_SIZE; i++) {
    for (int j = 0; j < MATRIX_SIZE; j++) {
      nums[i][j] = i * MATRIX_SIZE + j + 1;
    }
  }

  for (int i = 0; i < MATRIX_SIZE; i++) {
    for (int j = 0; j < MATRIX_SIZE; j++) {
      printf("%d ", nums[i][j]);
    }

    printf("\n");
  }

  return 0;
}
