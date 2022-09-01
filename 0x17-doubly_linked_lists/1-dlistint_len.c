#include "lists.h"
/**
* dlistint_len - Function that returns no. of elements of a d/l/list
* @h: pointer to head
* Return: Number of nodes
*
*/
size_t dlistint_len(const dlistint_t *h)
{
  int i = 0;
  while (h != NULL)
    {
      i++;
      h = h->next;
    }
  return (i);
}
