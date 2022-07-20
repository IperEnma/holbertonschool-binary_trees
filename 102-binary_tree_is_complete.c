#include "binary_trees.h"
/**
 * binary_tree_size - binary tree size
 * @tree: tree
 * Return: size tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);
	return (1 + size);
}
/**
 *
 *
 */
int iscomplete(const binary_tree_t *tree, size_t size, size_t index)
{
	int status = 0;

	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	status = iscomplete(tree->left, size, 2*index + 1);
	if (status == 0)
		return (status);
	status = iscomplete(tree->right, size, 2*index + 2);
	return (status);
}
/**
 *
 *
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int status = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	status = iscomplete(tree, size, 0);
	return (status);
}
