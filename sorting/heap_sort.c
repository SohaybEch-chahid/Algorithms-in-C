// Heap Sort Algorithm
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
 * Heapify function (Max Heap)
 * Ensures subtree rooted at i satisfies heap property
 */
void heapify(int arr[], int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i) {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}

/*
 * Heap Sort
 */
void heap_sort(int arr[], int n) {
  int i;

  // Build max heap
  for (i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  // Extract elements one by one
  for (i = n - 1; i > 0; i--) {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);
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
  int arr[] = {20, 16, 2, 5, 1, 67, 32};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting:\n");
  print_array(arr, n);

  heap_sort(arr, n);

  printf("After sorting:\n");
  print_array(arr, n);

  return 0;
}
