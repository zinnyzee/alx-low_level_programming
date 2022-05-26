#include "lists.h"
#include <string.h>

/**
 *  * add_node - adds a new node at beginning of a list
 *   * @head: pointer to the node
 *    * @str: value of the node
 *     *
 *      * Return: address or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	NULL;
	return (NULL);
		dup = strdup(str);
		NULL;
		{
			free(new);
			return (NULL);
		}
	 (len = 0);
		len++;
		new->str = dup;
		new->len = len;
		new->next = *head;

		*head = new;

		return (new);
}
