#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is root
 * @node: node
 * Return: 1 if is root or return 0 if fail or not is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
