#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node left in the arbol
 * @parent: parent node
 * @value: data node
 * Return: pointer node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	if (parent->left == NULL)
	{
		parent->left = new;
		new->parent = parent;
		return (new);
	}
	else
	{
		new->left = parent->left;
		new->parent = parent;
		parent->left = new;
		parent->left->left->parent = new;
		return (new);
	}
}
