#include "binary_trees.h"
/**
 * binary_tree_height - height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height = (1 + binary_tree_height(tree->left));
	if (tree->right)
		height = (1 + binary_tree_height(tree->right));
	return (height);
}
