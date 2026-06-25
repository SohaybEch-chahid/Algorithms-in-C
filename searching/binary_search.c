#include <stdio.h>

/*
 * Binary Search
 * Returns the index of the target if found.
 * Returns -1 otherwise.
 * The array must be sorted.
 */

int binary_search(int arr[], int low, int high, int target) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int arr[] = {-3, 2, 4, 5, 9, 16, 20, 25};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 20;

  int result = binary_search(arr, 0, n - 1, target);

  if (result != -1)
    printf("Element found at index %d\n", result);
  else
    printf("Element not found\n");

  return 0;
}
