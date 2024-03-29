#include "binary_trees.h"
/**
 * binary_tree_size - measures the size.
 * @tree: pointer to the root.
 * Return: If tree is NULL returns 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = binary_tree_size(tree->right);
	size += binary_tree_size(tree->left);
	size++;
	return (size);
}
