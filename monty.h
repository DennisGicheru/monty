#ifndef MONTY_H
#define MONTY_H

/* lIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct instance_s - data instance
 * @line: readed line
 * @args: the arguments
 * @line_number: line number
 * @fp: the file
 * @filename: filename
 * Description: data instance, line, args
*/
typedef struct instance_s
{
    char *line;
    char **args;
    char *filename;
    int line_number;
    FILE *fp;
} data_t;

extern data_t data;

/*OTHER PROTOTYPES*/
int process_line(stack_t **stack);
void add_dnodeint(stack_t **stack, unsigned int line_number);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);


#endif
