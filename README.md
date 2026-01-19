# 🛠️ C Array Toolkit

A robust, menu-driven Command Line Interface (CLI) for performing advanced 1D array operations in C.

![Language](https://img.shields.io/badge/Language-C-blue) ![Status](https://img.shields.io/badge/Status-Complete-green)

## 📖 Overview
This project is a comprehensive toolkit designed to manipulate arrays efficiently using **pointers** and **modular architecture**. Unlike standard single-file scripts, this project is structured into header and source files to demonstrate clean code organization, low-level memory management, and robust input validation.

<img width="1920" height="776" alt="demo_screenshot" src="https://github.com/user-attachments/assets/c8ffc4ad-a741-4199-9b06-b9e5fe4bb5ae" />

## ✨ Key Features
* **Modular Design:** Clean separation of concerns using `.h` interface and `.c` implementation files.
* **Memory Safety:** Includes bounds checking (`CAPACITY` limits) and input validation to prevent buffer overflows.
* **Pointer Arithmetic:** Uses pass-by-reference (`int *n`) to modify array size dynamically.
* **Algorithmic Efficiency:** Features optimized solutions like **Kadane’s Algorithm** (O(n)) and **In-Place Duplicate Removal**.

## 🚀 Functions List

### 🟢 Basic Operations
1.  **Insert Element:** Add elements at specific indices with bounds checking.
2.  **Delete Element:** Remove elements and shift memory safely.
3.  **Linear Search:** Find element existence and index.
4.  **Min/Max:** Identify range extremes in a single pass.

### 🟡 Transformations
5.  **Reverse Array:** In-place reversal using the two-pointer swap method.
6.  **Rotate Left:** Circularly shifts array elements.
7.  **Bubble Sort:** Sorts the array in ascending order.
8.  **Move Zeros:** Pushes all zero elements to the end while maintaining the relative order of non-zero elements.

### 🔴 Advanced Logic
9.  **Frequency Counter:** Counts occurrences using a "visited" array strategy.
10. **Remove Duplicates:** Removes duplicate values **in-place** without using a secondary array (O(n²) space optimized).
11. **Second Largest:** Finds the runner-up element in a single traversal (O(n)), handling edge cases like negative numbers.
12. **Max Subarray Sum:** Implements **Kadane’s Algorithm** to find the maximum sum of a contiguous subarray.

## 💻 Usage

### Prerequisites
You need a C compiler (like GCC) installed.


### Compilation
Since the project is modular, compile the main driver with the toolkit source:

```bash
gcc main.c array_toolkit.c -o array_toolkit
./array_toolkit
