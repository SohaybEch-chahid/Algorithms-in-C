// Selection Sort Algorithm
#include <stdio.h>

/*
 * Selection Sort
 * Repeatedly selects the minimum element
 * and places it at the beginning
 *
 * Time Complexity:
 * Best: O(n^2)
 * Average: O(n^2)
 * Worst: O(n^2)
 */

void selection_sort(int arr[], int n) {
  int i, j, min_index, temp;

  for (i = 0; i < n - 1; i++) {
    min_index = i;

    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index])
        min_index = j;
    }

    // Swap only once per iteration
    if (min_index != i) {
      temp = arr[i];
      arr[i] = arr[min_index];
      arr[min_index] = temp;
    }
  }
}

/*
 * Print array
 */
void print_array(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d\t", arr[i]);
  printf("\n");
}

int main(void) {
  int arr[] = {8, 12, 3, 16, 18, 2, 5, 20, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  selection_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
