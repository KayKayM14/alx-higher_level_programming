#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - double linked list
 * @n: integer stored in a node
 * @prev: previous node
 * @next: next node 
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistin_s *next;
}dlistint_t;


size_t print_dlistint(const dlistint_t *h);


#endif
