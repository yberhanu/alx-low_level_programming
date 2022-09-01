#include "lists.h"
/**
* get_dnodeint_at_index - get the nth node
* @head: the head of the list
* @index: the number of the node to get
* Return: the addy of node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (!head)
return (NULL);
for (i = 0; i < index; i++)
{
if (head->next)
head = head->next;
else
return (NULL);
}
return (head);
}
