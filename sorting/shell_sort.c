// Shell Sort Algorithm
#include <stdio.h>

/*
 * Swap two integers
 */

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

/*
 * Shell Sort
 * Generalized insertion sort using gaps
 *
 * Time Complexity:
 * Depends on gap sequence
 * Best: O(n log n)
 * Worst: O(n^2)
 */

void shell_sort(int arr[], int n) {
  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; i++) {
      int temp = arr[i];
      int j = i;

      while (j >= gap && arr[j - gap] > temp) {
        arr[j] = arr[j - gap];
        j -= gap;
      }

      arr[j] = temp;
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
  int arr[] = {121, 21, 7, 3, 1, 7, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  shell_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
