#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: tree
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = NULL;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (NULL);
	root = tree->left;
	tree->right = root->right;
	tree->parent = root;
	root->right = tree;
	root->parent = NULL;
	return (root);
}
