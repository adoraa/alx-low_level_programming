# 0x0E. C - Structures, typedef

This directory contains tasks on C program structures and typedef, given by the ALX School and instructed by Julien Barbier. The tasks focus on understanding and working with structures and typedef in the C programming.

## Table of Contents

- [Tasks](#)
  - [Task 0: Poppy](dog.h)
  - [Task 1: A Dog is the Only Thing on Earth That Loves You More Than You Love Yourself](1-init_dog.c)
  - [Task 2: A Dog Will Teach You Unconditional Love](2-print_dog.c)
  - [Task 3: Outside of a Dog, a Book is a Man's Best Friend](dog.h)
  - [Task 4: A Door is What a Dog is Perpetually on the Wrong Side Of](4-new_dog.c)
  - [Task 5: How Many Legs Does a Dog Have?](5-free_dog.c)

## Tasks

The tasks in this repository focus on working with structures and typedef in C. Each task has its own set of requirements and associated files.

### Task 0: Poppy

Define a new type `struct dog` with the following elements:

  - `name`, type = `char *`
  - `age`, type = `float`
  - `owner`, type = `char *`

### Task 1: A Dog is the Only Thing on Earth That Loves You More Than You Love Yourself

Write a function that initialize a variable of type `struct dog`

 - Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

### Task 2: A Dog Will Teach You Unconditional Love

Write a function that prints a `struct dog`

  - Prototype: `void print_dog(struct dog *d);`
  - Format: see example bellow
  - You are allowed to use the standard library
  - If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
  - If `d` is `NULL` print nothing.

### Task 3: Outside of a Dog, a Book is a Man's Best Friend

Define a new type `dog_t` as a new name for the type `struct dog`.

### Task 4: A Door is What a Dog is Perpetually on the Wrong Side Of

Write a function that creates a new dog.

  - Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
  - You have to store a copy of `name` and `owner`
  - Return `NULL` if the function fails

### Task 5: How Many Legs Does a Dog Have?

Write a function that frees dogs.

  - Prototype: `void free_dog(dog_t *d);`
