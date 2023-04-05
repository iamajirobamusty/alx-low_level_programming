#ifndef LIST_H
#define LIST_H
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: point to the next mode
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
