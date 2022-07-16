#include "binary_trees.h"
/**
 *
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	new->n = value;

	if (parent == NULL)
	{
		parent = new;
		return (new);
	}

	while (parent)
	{
		if (new->n <= parent->n)
		{
			if (parent->left == NULL)
			{
				parent->left = new;
				new->parent = parent;
				return (new);
			}
			else
				parent = parent->left;
		}
		else
		{
			if (parent->right == NULL)
			{
				parent->right = new;
				new->parent = parent;
				return (new);
			}
			else
				parent = parent->right;
		}

	}
	return (NULL);
}
