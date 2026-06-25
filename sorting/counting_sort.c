// Counting Sort Algorithm
#include <stdio.h>
#include <stdlib.h>

/*
 * Counting Sort
 * Works only with non-negative integers
 * Time Complexity: O(n + k)
 * Space Complexity: O(k)
 * where k = maximum value in array
 */

void counting_sort(int arr[], int n) {
  int i;
  int max = arr[0];

  // Find maximum value
  for (i = 1; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  // Allocate count array
  int *count = (int *)calloc(max + 1, sizeof(int));
  if (!count)
    return;

  // Store frequency of each element
  for (i = 0; i < n; i++)
    count[arr[i]]++;

  // Build prefix sum
  for (i = 1; i <= max; i++)
    count[i] += count[i - 1];

  // Output array
  int *output = (int *)malloc(n * sizeof(int));
  if (!output) {
    free(count);
    return;
  }

  // Build sorted array (stable sort)
  for (i = n - 1; i >= 0; i--) {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

  // Copy back to original array
  for (i = 0; i < n; i++)
    arr[i] = output[i];

  free(count);
  free(output);
}

void print_array(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d\t", arr[i]);
  printf("\n");
}

int main(void) {
  int arr[] = {8, 6, 9, 14, 3, 2, 5, 9, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  counting_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
