#include "lists.h"
/**
* print_dlistint - Function that prints elements of a d/l/list
* @h: pointer to head
* Return: Number of nodes
*
*/
size_t print_dlistint(const dlistint_t *h)
{
  int i = 0;
  while (h != NULL)
    {
      i++;
      printf("%d\n", h->n);
      h = h->next;
    }
  return (i);
}
