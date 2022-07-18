#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node right
 * @parent: parent node
 * @value: data node
 * Return: return new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
		return (new);
	}
	else
	{
		new->right = parent->right;
		new->parent = parent;
		parent->right = new;
		parent->right->right->parent = new;
		return (new);
	}
}

