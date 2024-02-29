#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that checks if is full or not
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL must returns 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_left_full = 1;
	int is_right_full = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->right && !tree->left)
	{
		return (1);
	}
	if ((tree->right && !tree->left) || (tree->left && !tree->right))
		return (0);

	is_left_full = binary_tree_is_full(tree->left);
	is_right_full = binary_tree_is_full(tree->right);
	return (is_left_full && is_right_full);
}
