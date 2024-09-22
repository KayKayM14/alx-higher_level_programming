#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

{
size_t count = 0;

while (h != count)
{
	print("%d\n" , h -> next);

	h = h -> next;

	count++;
}
return (count);
}
