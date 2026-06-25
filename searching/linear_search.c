// Linear Search Algorithm
#include <stdio.h>

/*
 * Linear Search
 * Returns index of target if found
 * Returns -1 if not found
 */

int linear_search(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target)
      return i;
  }
  return -1;
}

int main(void) {
  int arr[] = {12, 31, 64, 2, 85, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 2;

  int result = linear_search(arr, n, target);

  if (result != -1)
    printf("Element found at index %d\n", result);
  else
    printf("Element not found in the array\n");

  return 0;
}
