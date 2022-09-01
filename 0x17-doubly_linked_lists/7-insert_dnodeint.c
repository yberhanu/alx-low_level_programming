#include "lists.h"
/**
* insert_dnodeint_at_index - insert a node at an index
* @h: head of list
* @idx: the index
* @n: the int to put into the new node
* Return: address of new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *location;
  dlistint_t *new = malloc(sizeof(dlistint_t));
  if (!h || !new)
    return (new ? free(new), NULL : NULL);
  location = *h;
  new->n = n;
  if (!idx)
    {
      new->prev = NULL;
      new->next = location ? location : NULL;
      if (location)
	{
	  location->prev = new;
	}
      return (*h = new);
    }
  for (; location; location = location->next, idx--)
    {
      if (idx - 1 == 0)
	{
	  new->prev = location;
	  new->next = location->next;
	  if (new->next)
	    new->next->prev = new;
	  location->next = new;
	  return (new);
	 }
      }
  return (free(new), NULL);
}
