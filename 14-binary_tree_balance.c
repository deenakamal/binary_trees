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
 * binary_tree_height - gets hight of the binary tree.
 * @tree: pointer to root node of the tree
 *
 * Return: height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ = 1, right_ = 1;

	if (tree != NULL)
	{
		if (tree->left)
			left_ = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_ = 1 + binary_tree_height(tree->right);

		return ((left_ > right_) ? left_ : right_);
	}

	return (0);
}
