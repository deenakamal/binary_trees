#include "binary_trees.h"
/**
 * binary_tree_leaves - count number of leaves.
 * @tree: pointer to root node of the tree.
 * Return: if tree is NULL 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (tree != NULL)
	{
		if (!tree->left && !tree->right)
			leaves += 1;
		else
			leaves += 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
