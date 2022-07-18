#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node
 * Return: sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *move = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	move = node;
	move = move->parent;
	if (move->right != node)
		return (move->right);
	if (move->left != node)
		return (move->left);
	return (NULL);
}
