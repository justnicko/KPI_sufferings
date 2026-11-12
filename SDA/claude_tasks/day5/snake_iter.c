#include <stdio.h>

#define MATRIX_ROWS 3
#define MATRIX_COLUMNS 10

void snake_iter(int matrix[MATRIX_ROWS][MATRIX_COLUMNS]);
void print_matrix(int[MATRIX_ROWS][MATRIX_COLUMNS]);

int main()
{
  int nums[MATRIX_ROWS][MATRIX_COLUMNS];

  for (int i = 0; i < MATRIX_ROWS; i++) {
    for (int j = 0; j < MATRIX_COLUMNS; j++) {
      nums[i][j] = i * MATRIX_COLUMNS + j + 1;
    }
  }
  
  print_matrix(nums);
  snake_iter(nums);
  
  return 0;
}

void snake_iter(int matrix[MATRIX_ROWS][MATRIX_COLUMNS]) {
  for (int i = 0; i < MATRIX_ROWS; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < MATRIX_COLUMNS; j++) {
        printf("selected element: %d\n", matrix[i][j]);
      }
    } else {
      for (int j = MATRIX_COLUMNS - 1; j > -1; j--) {
        printf("selected element: %d\n", matrix[i][j]);
      }
    }
  }
}

void print_matrix(int matrix[MATRIX_ROWS][MATRIX_COLUMNS]) {
  for (int i = 0; i < MATRIX_ROWS; i++) {
    for (int j = 0; j < MATRIX_COLUMNS; j++) {
      printf("%d ", matrix[i][j]);
    }

    printf("\n");
  }

  printf("\n");
}