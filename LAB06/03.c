#include <stdio.h>
#define ARRAY_SIZE 100

int main() {

  int i, j;
  int A[ARRAY_SIZE] = {0};

  for (i = 2; i < ARRAY_SIZE; i++)
    A[i] = 1;

  for (int p = 2; p*p < ARRAY_SIZE; p++) {
    if (A[p] == 1) {
      for (j = p*p; j < ARRAY_SIZE; j += p)
        A[j] = 0;
    }
  }

  for (i = 2; i < ARRAY_SIZE; i++)
        if (A[i] == 1) printf("%d ", i);

  printf("\n");

  return 0;
}