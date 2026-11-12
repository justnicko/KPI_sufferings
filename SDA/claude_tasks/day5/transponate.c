#include <stdio.h>

#define MATRIX_SIZE 4

void transponate(int[][4]);
void print_matrix(int[][4]);

int main()
{
  int nums[MATRIX_SIZE][MATRIX_SIZE];

  for (int i = 0; i < MATRIX_SIZE; i++) {
    for (int j = 0; j < MATRIX_SIZE; j++) {
      nums[i][j] = i * MATRIX_SIZE + j + 1;
    }
  }
  
  print_matrix(nums);
  transponate(nums);
  print_matrix(nums);
  
  return 0;
}

void transponate(int matrix[][MATRIX_SIZE]) {
  for (int i = 0; i < MATRIX_SIZE; i++) {
    for (int j = 0; j < i; j++) {
      int T = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = T;
    }
  }
}

void print_matrix(int matrix[][MATRIX_SIZE]) {
  for (int i = 0; i < MATRIX_SIZE; i++) {
    for (int j = 0; j < MATRIX_SIZE; j++) {
      printf("%d ", matrix[i][j]);
    }

    printf("\n");
  }

  printf("\n");
}