#ifndef _MONTY_H_
#define _MONTY_H_


/* ----- C Libraries ------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ----- Delims ------*/

#define DELIMS "\n \r\t"

/* ----- Data Structures ----- */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* ----- files----- */
void push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void pop (stack_t **stack, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);


extern stack_t **global_head;

void global_free(void);

void read_file(char *file, stack_t **stack);


#endif
