#include "binary_trees.h"
/**
 * binary_tree_depth - depth.
 * @tree: pointer to the root node of the tree to measure the depth.
 *
 * Return: returns depth, If tree is NULL returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_ = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		tree = tree->parent;
		depth_++;
	}
	return (depth_);
}
