# 0x0F. C - Function pointers
## General
- What are function pointers and how to use them?
- What does a function pointer exactly hold?
- Where does a function pointer point to in the virtual memory?

## Table of Contents

- [Mandatory tasks](#)
  - [Task 0: What's my name](0-print_name.c)
  - [Task 1: If you spend too much time thinking about a thing , you'll never get it done](1-array_iterator.c)
  - [Task 2: 2. To hell with circumstances; I create opportunities](2-int_index.c)
  - [Task 3: 3. A goal is not always meant to be reached, it often serves simply as something to aim at](3-calc.h)

- [Optional tasks](#)
  - [4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker](100-main_opcodes.c)

## Description

The tasks in this directory focus on understanding and working C function pointers. These tasks are given by the ALX school and instructed by Julien Barbier. 

### Task 0: What's My Name

Write a function that prints a name.

### Task 1: If You Spend Too Much Time Thinking About a Thing

Write a function that executes a function given as a parameter on each element of an array.

### Task 2: To Hell With Circumstances; I Create Opportunities

Write a function that searches for an integer.

### Task 3: A Goal is Not Always Meant to be Reached

- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

This task requires that you create four different files.

## Optional Task: Most Hackers Are Young

Write a program that prints the $\textcolor{red}{\textsf{opcodes}}$ of its own main function.

- Usage: `./main number_of_bytes`
- Output format:
	- the opcodes should be printed in hexadecimal, lowercase
	- each opcode is two char long
	- listing ends with a new line
	- see example
- You are allowed to use `printf` and `atoi`
- You have to use `atoi` to convert the argument to an `int`
- If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
- If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
- You do not have to compile with any flags

Note: if you want to translate your opcodes to assembly instructions, you can use, for instance $\textcolor{red}{\textsf{udcli}}$.
