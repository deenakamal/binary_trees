#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node.
 * Return: Height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left)
		return (0);
	if (!tree->right)
		return (0);

	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
