# Algorithms Notes

## What is an Algorithm?

An algorithm is a finite sequence of well-defined instructions used to solve a problem or perform a computation.

Characteristics of a good algorithm:

- Correctness
- Efficiency
- Simplicity
- Scalability
- Readability

Example:

```c
int sum(int a, int b)
{
    return a + b;
}
```

This algorithm takes two numbers and returns their sum.

---

# Time Complexity

Time Complexity measures how the execution time of an algorithm grows as the input size increases.

## Common Complexity Classes

| Complexity | Name         |
| ---------- | ------------ |
| O(1)       | Constant     |
| O(log n)   | Logarithmic  |
| O(n)       | Linear       |
| O(n log n) | Linearithmic |
| O(n²)      | Quadratic    |
| O(n³)      | Cubic        |
| O(2ⁿ)      | Exponential  |
| O(n!)      | Factorial    |

### Examples

#### O(1)

```c
int getFirst(int arr[])
{
    return arr[0];
}
```

#### O(n)

```c
for(int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
```

#### O(n²)

```c
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {
        printf("*");
    }
}
```

---

# Space Complexity

Space Complexity measures how much memory an algorithm requires.

Examples:

| Complexity | Description      |
| ---------- | ---------------- |
| O(1)       | Constant Memory  |
| O(n)       | Linear Memory    |
| O(n²)      | Quadratic Memory |

---

# Searching Algorithms

Searching algorithms are used to find a specific element within a collection of data.

## Linear Search

### Idea

Check every element one by one until the target is found.

Example:

```text
[10, 20, 30, 40, 50]

Find 40

10 ❌
20 ❌
30 ❌
40 ✅
```

### Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(1)       |
| Average | O(n)       |
| Worst   | O(n)       |

### Advantages

- Simple implementation
- Works on unsorted arrays

### Disadvantages

- Slow for large datasets

---

## Binary Search

### Idea

Repeatedly divide the search space into two halves.

Example:

```text
[10, 20, 30, 40, 50, 60, 70]

Find 50

Middle = 40
50 > 40

Search right half

Middle = 60
50 < 60

Search left half

Found 50
```

### Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(1)       |
| Average | O(log n)   |
| Worst   | O(log n)   |

### Advantages

- Very fast

### Disadvantages

- Requires sorted data

---

# Sorting Algorithms

Sorting algorithms arrange data in ascending or descending order.

---

## Bubble Sort

### Idea

Repeatedly swap adjacent elements if they are in the wrong order.

Example:

```text
5 3 8 1

5 3 -> swap
3 5 8 1

8 1 -> swap
3 5 1 8

Continue...
```

### Complexity

| Best | Average | Worst |
| ---- | ------- | ----- |
| O(n) | O(n²)   | O(n²) |

---

## Selection Sort

### Idea

Find the smallest element and place it at the beginning.

Example:

```text
64 25 12 22 11

Smallest = 11

11 25 12 22 64
```

### Complexity

| Best  | Average | Worst |
| ----- | ------- | ----- |
| O(n²) | O(n²)   | O(n²) |

---

## Insertion Sort

### Idea

Build the sorted portion one element at a time.

Example:

```text
5 2 4 6 1

5

2 5

2 4 5

2 4 5 6

1 2 4 5 6
```

### Complexity

| Best | Average | Worst |
| ---- | ------- | ----- |
| O(n) | O(n²)   | O(n²) |

---

## Shell Sort

### Idea

Improved Insertion Sort using gaps.

Example gaps:

```text
n/2
n/4
...
1
```

### Complexity

Depends on gap sequence.

Average performance is better than Insertion Sort.

---

## Counting Sort

### Idea

Count occurrences of each value.

Example:

```text
Input:

4 2 2 8 3 3 1

Count occurrences

Output:

1 2 2 3 3 4 8
```

### Complexity

```text
Time: O(n + k)
Space: O(k)
```

Where k is the range of values.

---

## Radix Sort

### Idea

Sort numbers digit by digit.

Example:

```text
170
045
075
090
802
024
002
066
```

Sort by:

1. Ones digit
2. Tens digit
3. Hundreds digit

### Complexity

```text
O(d(n + k))
```

Where:

- d = number of digits
- k = range of digits

---

## Merge Sort

### Idea

Divide and conquer.

```text
[38 27 43 3]

Divide

[38 27]
[43 3]

Divide

[38] [27]
[43] [3]

Merge

[27 38]
[3 43]

Merge

[3 27 38 43]
```

### Complexity

| Best       | Average    | Worst      |
| ---------- | ---------- | ---------- |
| O(n log n) | O(n log n) | O(n log n) |

### Advantage

Stable sorting algorithm.

---

## Quick Sort

### Idea

Choose a pivot and partition the array.

Example:

```text
8 3 1 7 0 10 2

Pivot = 7

3 1 0 2 | 7 | 8 10
```

### Complexity

| Best       | Average    | Worst |
| ---------- | ---------- | ----- |
| O(n log n) | O(n log n) | O(n²) |

### Advantage

Very fast in practice.

---

## Heap Sort

### Idea

Use a Binary Heap to repeatedly extract the maximum element.

Example:

```text
Build Max Heap

        10
       /  \
      5    3
     / \
    2   4
```

Remove root repeatedly and rebuild heap.

### Complexity

| Best       | Average    | Worst      |
| ---------- | ---------- | ---------- |
| O(n log n) | O(n log n) | O(n log n) |

### Advantage

In-place sorting algorithm.

---

# Comparison Table

| Algorithm      | Best       | Average    | Worst      | Space    |
| -------------- | ---------- | ---------- | ---------- | -------- |
| Linear Search  | O(1)       | O(n)       | O(n)       | O(1)     |
| Binary Search  | O(1)       | O(log n)   | O(log n)   | O(1)     |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      | O(1)     |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      | O(1)     |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      | O(1)     |
| Shell Sort     | Depends    | Depends    | O(n²)      | O(1)     |
| Counting Sort  | O(n+k)     | O(n+k)     | O(n+k)     | O(k)     |
| Radix Sort     | O(d(n+k))  | O(d(n+k))  | O(d(n+k))  | O(n+k)   |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) | O(n)     |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      | O(log n) |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) | O(1)     |

---

# References

- Introduction to Algorithms (CLRS)
- The C Programming Language (Kernighan & Ritchie)
- Data Structures and Algorithms in C
- GeeksforGeeks
- MIT OpenCourseWare

---

Happy Coding! 🚀
