#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: tree
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;

	if (tree->right == NULL)
		return (NULL);
	root = tree->right;
	tree->right = NULL;
	tree->parent = root;
	root->left = tree;
	return (root);
}
