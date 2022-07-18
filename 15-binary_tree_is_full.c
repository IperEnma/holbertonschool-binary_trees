#include "binary_trees.h"
/**
 *
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int status = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right == NULL)
		return (0);
	if (tree->right && tree->left == NULL)
		return (0);
	if (tree->left)
		status = binary_tree_is_full(tree->left);
	if (tree->right)
		status = binary_tree_is_full(tree->right);
	return (status);
}
