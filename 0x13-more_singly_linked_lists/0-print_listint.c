#include "list.h";

/**
 * print_lisint - prints the elements in a linked list
 * @h: points to the linked list
 *
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while( h != 0)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
