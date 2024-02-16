# Hash Table Project

## Description
This C project focuses on the implementation of a hash table data structure, including hash functions, collision resolution, and basic operations.

## Learning Objectives
- What's a hash function is and its characteristics.
- How hash tables work, their advantages, and common use cases.
- Dealing with collisions in the context of a hash table.

## Requirements
- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS using gcc with specific options.
- All files should end with a new line.
- Mandatory README.md file at the root of the project folder.
- No global variables allowed.
- No more than 5 functions per file.
- Use C standard library.
- Header file with function prototypes named `hash_tables.h` (include guarded).
  
## Data Structures
Use the provided data structures:
- `hash_node_t` - Node of a hash table.
- `hash_table_t` - Hash table data structure.

## Tests
Collaborated on a set of tests to ensure the correctness and efficiency of the implementation.

## Python Dictionaries
Understand the connection between this project and Python dictionaries. Python dictionaries are implemented using hash tables.

## How to Compile
To compile the project, use the following command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hash_table
