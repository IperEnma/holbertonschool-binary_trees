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
 * pow_recursive - calculate pow
 * @base: base
 * @pow: pow
 * Return: result
 */
size_t pow_recursive(size_t base, size_t pow)
{
	if (pow <= 0)
		return (1);
	else
		return (base * pow_recursive(base, pow - 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree
 * Return: 1 is perfect or 0 is not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size = 0, height = 0, pow = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	pow = pow_recursive(2, height + 1);
	if (pow - 1 == size)
		return (1);
	return (0);
}
