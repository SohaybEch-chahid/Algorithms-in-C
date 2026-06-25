# Algorithms in C

A collection of classic Searching and Sorting Algorithms implemented in the C programming language. This repository is designed for students, beginners, and anyone interested in learning the fundamentals of algorithms and their implementations.

## Repository Structure

```text
Algorithms-in-C/
├── assets
│   └── images
├── docs
│   └── algorithms_notes.md
├── LICENSE
├── README.md
├── searching
│   ├── binary_search.c
│   └── linear_search.c
└── sorting
    ├── bubble_sort.c
    ├── counting_sort.c
    ├── heap_sort.c
    ├── insertion_sort.c
    ├── merge_sort.c
    ├── quick_sort.c
    ├── radix_sort.c
    ├── selection_sort.c
    └── shell_sort.c
```

## Searching Algorithms

### Linear Search

- Time Complexity:
  - Best Case: O(1)
  - Average Case: O(n)
  - Worst Case: O(n)

- Space Complexity: O(1)

### Binary Search

- Time Complexity:
  - Best Case: O(1)
  - Average Case: O(log n)
  - Worst Case: O(log n)

- Space Complexity: O(1)

> Note: Binary Search requires a sorted array.

---

## Sorting Algorithms

### Bubble Sort

- Best Case: O(n)
- Average Case: O(n²)
- Worst Case: O(n²)
- Space Complexity: O(1)

### Selection Sort

- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)
- Space Complexity: O(1)

### Insertion Sort

- Best Case: O(n)
- Average Case: O(n²)
- Worst Case: O(n²)
- Space Complexity: O(1)

### Shell Sort

- Best Case: O(n log n)
- Average Case: Depends on gap sequence
- Worst Case: O(n²)
- Space Complexity: O(1)

### Counting Sort

- Time Complexity: O(n + k)
- Space Complexity: O(k)

### Radix Sort

- Time Complexity: O(d(n + k))
- Space Complexity: O(n + k)

### Merge Sort

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)
- Space Complexity: O(n)

### Quick Sort

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²)
- Space Complexity: O(log n)

### Heap Sort

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n log n)
- Space Complexity: O(1)

---

## Learning Objectives

This repository helps you:

- Understand fundamental searching algorithms.
- Learn classic sorting techniques.
- Analyze time and space complexity.
- Improve problem-solving skills.
- Build a strong foundation in Data Structures and Algorithms (DSA).
- Practice writing clean and efficient C code.

---

## Compilation and Execution

Compile any file using GCC:

```bash
gcc sorting/bubble_sort.c -o bubble_sort
./bubble_sort
```

Example for Binary Search:

```bash
gcc searching/binary_search.c -o binary_search
./binary_search
```

---

## Requirements

- GCC Compiler
- Linux, macOS, or Windows
- Basic knowledge of the C programming language

---

## Future Additions

Planned algorithm categories:

- Data Structures
  - Linked Lists
  - Stacks
  - Queues
  - Trees
  - Hash Tables

- Graph Algorithms
  - BFS
  - DFS
  - Dijkstra's Algorithm
  - Minimum Spanning Tree

- Dynamic Programming

- Greedy Algorithms

- Backtracking

- Recursion

---

## Contributing

Contributions are welcome.

If you would like to improve an implementation, optimize an algorithm, or add new algorithms, feel free to fork the repository and submit a pull request.

---

## License

This project is licensed under the MIT License. See the LICENSE file for more information.

---

## Author

**Sohayb Chahid**

GitHub: https://github.com/SohaybEch-chahid
