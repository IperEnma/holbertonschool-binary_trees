#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree: tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
/**
 * binary_tree_t *binary_trees_ancestor - owest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int first_depth = 0, second_depth = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)second);
	if (first->parent == NULL)
		return ((binary_tree_t *)first);
	if (second->parent == NULL)
		return ((binary_tree_t *)second);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	while (1)
	{
		if (first_depth > second_depth)
		{
			first_depth--;
			first = first->parent;
		}
		if (second_depth > first_depth)
		{
			second_depth--;
			second = second->parent;
		}
		if (second_depth == first_depth)
		{
			if (second == first)
				return ((binary_tree_t *)second);
			second = second->parent;
			first = first->parent;
		}
	}
}
