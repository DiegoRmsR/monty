#ifndef MONTY_P
#define MONTY_P

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 * @n:
 * @prev:
 * @next:
 *
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 *
 *
 *
 */

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
