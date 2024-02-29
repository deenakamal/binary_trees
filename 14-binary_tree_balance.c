#include "binary_trees.h"
/**
 * binary_tree_balance - measure  balance factor of a tree
 * @tree: pointer to root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measure tree's height
 * @tree: pointer to node of the tree
 * Return: height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t h_left = 0, h_right = 0;

		if (tree->left)
			h_left = 1 + binary_tree_height(tree->left);
		else
			h_left = 1;
		if (tree->right)
			h_right = 1 + binary_tree_height(tree->right);
		else
			h_right = 1;

		return ((h_left > h_right) ? h_left : h_right);
	}

	return (0);
}
