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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree
 * Return: 1 is perfect or 0 is not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full = 0, balance = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	full = binary_tree_is_full(tree);
	balance = binary_tree_balance(tree);
	if (full == 1 && balance == 0)
		return (1);
	else
		return (0);
}
