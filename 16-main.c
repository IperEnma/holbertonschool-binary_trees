#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int perfect;

	perfect = binary_tree_is_perfect(NULL);
  	printf("Perfect: %d\n", perfect);
    root = binary_tree_node(NULL, 98);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);
    root->left = binary_tree_node(root, 12);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);
    root->right = binary_tree_node(root, 402);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);
    binary_tree_insert_right(root->left, 54);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);
    binary_tree_insert_right(root, 128);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);
    root->left->left = binary_tree_node(root->left, 10);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);
    root->right->left = binary_tree_node(root->right, 10);
	binary_tree_print(root);
  	perfect = binary_tree_is_perfect(root);
  	printf("Perfect: %d\n", perfect);

    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    root->right->right->left = binary_tree_node(root->right->right, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    root->right->right->right = binary_tree_node(root->right->right, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n", perfect);
    return (0);
}
