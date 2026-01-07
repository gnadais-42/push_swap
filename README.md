*This project has been created as part of the 42 curriculum by gnadais-.*

# push_swap

## Description

**push_swap** is a sorting algorithm project whose goal is to sort a stack of integers using a limited set of operations and the smallest possible number of moves.

The program receives a list of integers as arguments, stores them in a stack, and outputs a sequence of instructions that will sort the stack in ascending order. Only two stacks (`a` and `b`) are allowed, and only a predefined set of operations can be used.

The challenge of this project lies in:
- Choosing efficient sorting strategies
- Minimizing the number of operations
- Handling edge cases and input validation
- Writing robust, memory-safe C code

A companion program, **checker**, is also provided to verify that a sequence of instructions correctly sorts a given input.

---

## Instructions

### Compilation

To compile the main program:

make

This will generate the executable:

./push_swap

To compile the bonus checker program:

make bonus

This will generate:

./checker

To clean object files:

make clean

To remove all compiled files:

make fclean

To recompile everything:

make re

### Usage
push_swap
Run push_swap with a list of integers as arguments:

./push_swap 3 2 1

The program will output a list of instructions, one per line, such as:

sa
rra

These instructions, when applied to the stack, will sort it.

checker (bonus)
You can verify the correctness of the output using checker:

./push_swap 3 2 1 | ./checker 3 2 1
Output:

OK if the stack is correctly sorted

KO otherwise

Error if something unexpected like an input error happens

## Resources
### Algorithm & Project References
42 subject PDF: push_swap

Sorting algorithms overview:

https://en.wikipedia.org/wiki/Sorting_algorithm

### Use of Artificial Intelligence
AI tools (ChatGPT) were used during the development of this project as a learning and debugging aid, specifically to:

Clarify project requirements and edge cases

Review algorithmic approaches and complexity considerations

Writing this README lol

## Notes
The program correctly handles invalid inputs, duplicates, and integer overflows.

Memory leaks were checked using Valgrind.

The project follows the constraints and rules defined by the 42 subject.
