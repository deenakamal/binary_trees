#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function checks if node is leaf.
 *
 * @node: Pointer to node to check.
 *
 * Return: if not leaf returns 0 if leaf returns 1.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
