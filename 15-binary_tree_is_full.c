#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree
 * Return: 1 if is full or 0 if failed or not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right == NULL)
		return (0);
	if (tree->right && tree->left == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_is_full(tree->left);
	if (tree->right)
		right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
