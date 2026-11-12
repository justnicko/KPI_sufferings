#include <stdio.h>

#define MATRIX_ROWS 1
#define MATRIX_COLUMNS 2

void spiral_iter(int matrix[MATRIX_ROWS][MATRIX_COLUMNS]);
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
  spiral_iter(nums);
  
  return 0;
}

void spiral_iter(int matrix[MATRIX_ROWS][MATRIX_COLUMNS]) {
  int p_max = (MATRIX_ROWS < MATRIX_COLUMNS ? MATRIX_ROWS : MATRIX_COLUMNS) / 2;

  for (int p = 0; p < p_max; p++) {
    for (int j = p; j < MATRIX_COLUMNS - p; j++) {
      
      printf("r%d ", matrix[p][j]);
    }

    for (int i = p + 1; i < MATRIX_ROWS - p; i++) {
      printf("d%d ", matrix[i][MATRIX_COLUMNS - p - 1]);
    }

    for (int j = MATRIX_COLUMNS - p - 2; j > p - 1; j--) {
      printf("l%d ", matrix[MATRIX_ROWS - p - 1][j]);
    }

    for (int i = MATRIX_ROWS - p - 2; i > p; i--) {
      printf("u%d ", matrix[i][p]);
    }

    printf("\n");
  }

  if ((MATRIX_ROWS % 2 == 1) && (MATRIX_COLUMNS > MATRIX_ROWS)) {
    for (int j = p_max; j < MATRIX_COLUMNS - p_max; j++) {
      printf("last%d ", matrix[p_max][j]);
    }
  } else if ((MATRIX_COLUMNS % 2 == 1) && (MATRIX_ROWS > MATRIX_COLUMNS)) {
    for (int i = p_max; i < MATRIX_ROWS - p_max; i++) {
      printf("last%d ", matrix[i][p_max]);
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