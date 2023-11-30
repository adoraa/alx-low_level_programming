# 0x10. C - Variadic functions

## General - Learning Objectives
- What are variadic functions
- How to use `va_start`, `va_arg` and `va_end` macros
- Why and how to use the `const` type qualifier

## Files
Task number | 
0.	    | [Beauty is variable, ugliness is constant](3-print_all.c)
1.	    | [To be is to be the value of a variable](2-print_strings.c)
2.	    | [One woman's constant is another woman's variable](1-print_numbers.c)
3.	    | [To be is a to be the value of a variable](0-sum_them_all.c)

## Description
The tasks in this directory focus on understanding and working with C variadic functions. These tasks are given by the ALX school and instructed by Julien Barbier.

### Task 0
Write a function that returns the sum of all its parameters.

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`

### Task 1
Write a function that prints numbers, followed by a new line.

- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between numbers
- and `n` is the number of integers passed to the function

### Task 2
Write a function that prints strings, followed by a new line.

- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- where `separator` is the string to be printed between the strings
- and `n` is the number of strings passed to the function

### Task 3
Write a function that prints anything.

- Prototype: `void print_all(const char * const format, ...);`
