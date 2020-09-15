# Monty: C - Stacks, Queues - LIFO, FIFO:

## The Monty language:
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.


## Environmental Specs:
* __Environment:__ Ubuntu 14.04 LTS
* __Compiler:__ gcc 4.8.4 (C90)
* __Languages:__ C language, Monty

## Compilation & Output:
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

## Concept Covered:
* What do LIFO and FIFO mean.
* What is a stack, and when to use it.
* What is a queue, and when to use it.
* What are the common implementations of stacks and queues.
* What are the most common use cases of stacks and queues.
* What is the proper way to use global variables.

## Opcodes:
* push - Push an elements to the stack.
* pall - Prints all the values on the stack, starting from the top of the stack.
* pint - Prints the value at the top of the stack, followed by a new line.
* pop - Removes the top element of the stack.
* swap - Swaps the top two elements of the stack.
* add - Adds the top two elements of the stack.
* sub - Subtracts the top element of the stack from the second top element of the stack.
* div - Divides the second top element of the stack by the top element of the stack.
* mul - Multiplies the second top element of the stack with the top element of the stack.
* mod - Computes the rest of the division of the second top element of the stack by the top element of the stack.
* pchar - Prints the char at the top of the stack, followed by a new line.
* pstr - Prints the string starting at the top of the stack, followed by a new line.
* rotl - Rotates the stack to the top.
* rotr - Rotates the stack to the bottom.
* stack - Sets the format of the data to a stack (LIFO). This is the default behavior of the program.
* queue - Sets the format of the data to a queue (FIFO).


## Author:
Ons Ben Jannet
