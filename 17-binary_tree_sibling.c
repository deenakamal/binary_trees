#include "binary_trees.h"
/**
 * binary_tree_sibling - finds nodes siblings
 *
 * @node: pointer to node that check siblings.
 *
 * Return: NULL if no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node|| !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
