#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *move = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	move = node;
	move = move->parent->parent;

	if (move->right != node->parent)
		return (move->right);
	if (move->left != node->parent)
		return (move->left);
	return (NULL);
}
