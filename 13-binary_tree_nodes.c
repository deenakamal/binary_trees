#include "binary_trees.h"
/**
 * binary_tree_nodes - gets count of nodes.
 * @tree: pointer to node.
 * Return: if tree is NULL must returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_of_nodes = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	if (tree != NULL)
	{
		if (tree->left || tree->right)
			count_of_nodes += 1;
		count_of_nodes = binary_tree_nodes(tree->left);
		count_of_nodes += binary_tree_nodes(tree->right);
		count_of_nodes++;
	}
	return (count_of_nodes);
}
