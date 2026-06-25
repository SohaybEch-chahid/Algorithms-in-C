// Quick Sort Algorithm
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
 * Partition function
 * Places pivot element at correct position
 */
int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[high]);
  return i + 1;
}

/*
 * Quick Sort (Divide and Conquer)
 */
void quick_sort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
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
  int arr[] = {12, 6, 16, 1, 9, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  quick_sort(arr, 0, n - 1);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
