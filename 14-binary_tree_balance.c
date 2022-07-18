#include "binary_trees.h"
/**
 * max_height - compare tow integers
 * @left: count
 * @right: count
 * Return: max integer
 */
size_t max_height(size_t left, size_t right)
{
	if (left == right)
		return (left);
	if (left > right)
		return (left);
	if (right > left)
		return (right);
	return (0);
}
/**
 * binary_tree_height - height of a binary tree
 * @tree: tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		left_height = (1 + binary_tree_height(tree->left));
	if (tree->right)
		right_height = (1 + binary_tree_height(tree->right));

	return (max_height(left_height, right_height));
}
/**
 * binary_tree_balance - the balance factor of a binary tree
 * @tree: tree
 * Return: factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	return (left_height - right_height);
}
