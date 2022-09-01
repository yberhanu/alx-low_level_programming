#include "lists.h"
/**
* add_dnodeint - Adds a new node at start of list
* @head: Double pointer to head
* @n: Integer data to be added
* Return: Address of new element
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new = malloc(sizeof(dlistint_t));
  if (!new)
    return (NULL);
  new->n = n;
  new->prev = NULL;
  new->next = *head;
  if (!(*head))
    {
      *head = new;
      return (*head);
    }
  *head = new;
  return (new);
}
