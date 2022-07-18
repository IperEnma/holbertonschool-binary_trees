#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree
 * Return: 1 if is full or 0 if failed or not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int status = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right == NULL)
		return (0);
	if (tree->right && tree->left == NULL)
		return (0);
	if (tree->left)
		status = binary_tree_is_full(tree->left);
	if (tree->right)
		status = binary_tree_is_full(tree->right);
	return (status);
}
