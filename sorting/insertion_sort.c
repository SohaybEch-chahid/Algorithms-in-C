// Insertion Sort Algorithm
#include <stdio.h>

/*
 * Insertion Sort
 * Builds sorted array one element at a time
 * Time Complexity:
 * Best: O(n)
 * Average: O(n^2)
 * Worst: O(n^2)
 */

void insertion_sort(int arr[], int n) {
  int i, j, key;

  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    // Move elements greater than key one position ahead
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
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
  int arr[] = {10, 20, 8, 2, 17, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  insertion_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
