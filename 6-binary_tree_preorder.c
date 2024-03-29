#include "binary_trees.h"
/**
 * binary_tree_preorder - hrough a binary tree using pre-order traversal
 * @func: function
 * @tree: tree
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
