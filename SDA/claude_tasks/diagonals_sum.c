#include <stdio.h>

#define MATRIX_SIZE 4

void print_matrix(int[][4]);

int main()
{
  int nums[MATRIX_SIZE][MATRIX_SIZE];
  int primary_diag_sum = 0, secondary_diag_sum = 0;

  for (int i = 0; i < MATRIX_SIZE; i++) {
    for (int j = 0; j < MATRIX_SIZE; j++) {
      nums[i][j] = i * MATRIX_SIZE + j + 1;
    }
  }
  
  print_matrix(nums);
  
  for (int i = 0; i < MATRIX_SIZE; i++) {
    primary_diag_sum += nums[i][i];
    secondary_diag_sum += nums[MATRIX_SIZE - i - 1][MATRIX_SIZE - i - 1];
  }
  
  printf("Primary diagonal sum: %d\n", primary_diag_sum);
  printf("Secondary diagonal sum: %d\n", secondary_diag_sum);
  
  return 0;
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