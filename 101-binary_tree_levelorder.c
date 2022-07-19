#include "binary_trees.h"
/**
 * printorder - printorder
 * @tree: tree
 * @func: func
 * @lvl: lvl
 * Return: status
 */
int printorder(const binary_tree_t *tree, void (*func)(int), int lvl)
{
	int status = 0;

	if (tree == NULL)
		return (0);
	if (lvl == 1)
	{
		if (tree->left)
			func(tree->left->n);
		if (tree->right)
			func(tree->right->n);
		return (1);
	}

	status = printorder(tree->left, func, lvl - 1);
	status = printorder(tree->right, func, lvl - 1);
	return (status);
}
/**
 * binary_tree_levelorder - through a binary tree using level-order traver
 * @tree: tree
 * @func: ponter to func
 * Return: anything
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int lvl = 1;

	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	while (printorder(tree, func, lvl))
		lvl++;
}
