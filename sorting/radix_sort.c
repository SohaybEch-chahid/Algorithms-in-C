// Radix Sort Algorithm
#include <stdio.h>
#include <stdlib.h>

/*
 * Get maximum value in array
 */

int get_max(int arr[], int n) {
  int max = arr[0];

  for (int i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];

  return max;
}

/*
 * Counting sort based on digit (exp)
 */
void counting_sort_digit(int arr[], int n, int exp) {
  int i;
  int count[10] = {0};

  int *output = (int *)malloc(n * sizeof(int));
  if (!output)
    return;

  // Count occurrences
  for (i = 0; i < n; i++)
    count[(arr[i] / exp) % 10]++;

  // Prefix sum
  for (i = 1; i < 10; i++)
    count[i] += count[i - 1];

  // Build output array (stable sort)
  for (i = n - 1; i >= 0; i--) {
    int digit = (arr[i] / exp) % 10;
    output[count[digit] - 1] = arr[i];
    count[digit]--;
  }

  // Copy back
  for (i = 0; i < n; i++)
    arr[i] = output[i];

  free(output);
}

/*
 * Radix Sort
 */
void radix_sort(int arr[], int n) {
  int max = get_max(arr, n);

  for (int exp = 1; max / exp > 0; exp *= 10)
    counting_sort_digit(arr, n, exp);
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
  int arr[] = {158, 6, 96, 214, 741, 144, 945};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  radix_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
