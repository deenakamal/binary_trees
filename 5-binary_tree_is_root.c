#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root.
 *
 * @node:  pointer to the node to check.
 * Return: if node is a leaf returns 1 if node is not leaf returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
