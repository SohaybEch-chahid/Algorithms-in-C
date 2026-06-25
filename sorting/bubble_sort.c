#include <stdio.h>

/*
 * Bubble Sort
 * Sorts an array in ascending order
 * Time Complexity:
 * Best: O(n)
 * Average/Worst: O(n^2)
 */

void bubble_sort(int arr[], int n) {
  int i, j, swap;
  int swapped;

  for (i = 0; i < n - 1; i++) {
    swapped = 0;

    for (j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;

        swapped = 1;
      }
    }

    // optimization: stop if already sorted
    if (swapped == 0)
      break;
  }
}

void print_array(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d\t", arr[i]);
  printf("\n");
}

int main(void) {
  int arr[] = {20, 18, 5, 4, 23, 90, 56, 0};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  bubble_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
