#include <stdio.h>

int main(void) {
  int height, row, hash, space, row2, hash2;
  do {
    printf("Height: ");
    scanf("%i", &height);

  } while (height < 1 || height > 8);

  for (row = 0; row < height; row++) {
    for (space = height - row - 1; space > 0; space--) {
      printf(" ");
    }
    for (hash = 0; hash <= row; hash++) {
      printf("#");
    }
    printf("..");
    for (row2 = 0; row2 < row + 1; row2++) {
      printf("#");
    }
    printf("\n");
  }
}
