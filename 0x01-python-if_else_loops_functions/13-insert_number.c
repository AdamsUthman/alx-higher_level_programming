#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - inserrts a number into a sorted singly linked list
 *
 * @head: Double pointer to a singly linked list
 *
 * @number: Value of the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	int flag = 0;
	listint_t *new_node = NULL, *actual = NULL, *after = NULL;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = number, new_node->next = NULL;
