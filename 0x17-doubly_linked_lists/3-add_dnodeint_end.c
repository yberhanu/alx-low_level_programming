#include "lists.h"
/**
* add_dnodeint_end - add a node at the end of a d list
* @head: the head
* @n: the int to add
* Return: address of new node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new = malloc(sizeof(dlistint_t));
  dlistint_t *location;
  if (!head || !new)
    return (new ? free(new), NULL : NULL);
  new->n = n;
  new->next = NULL;
  if (!*head)
    {
      new->prev = NULL;
      *head = new;
     }
  else
    {
      location = *head;
      while (location->next)
	{
	 location = location->next;
	}
      location->next = new;
      new->prev = location;
    }
  return (new);
}
