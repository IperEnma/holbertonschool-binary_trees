#include "binary_trees.h"
/**
 * binary_tree_node - function that create node
 * @parent: node parent
 * @value: data node
 * Return: pointer node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	new->n = value;

	return (new);
}
