#include "binary_trees.h"
/**
 * binary_tree_node - a function creates a binary tree node
 * @parent: pointer to the parent node.
 * @value: value of the new node.
 *
 * Return: pointer to the new node
 *         or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode_;

	newnode_ = malloc(sizeof(binary_tree_t));
	if (!newnode_)
		return (NULL);
	newnode_->parent = parent;
	newnode_->n = value;
	newnode_->right = NULL;
	newnode_->left = NULL;
	return (newnode_);
}
