#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: a pointer to the created node, NULL on failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode_;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode_ = malloc(sizeof(binary_tree_t));
	if (!newnode_)
	{
		return (NULL);
	}

	newnode_->n = value;
	newnode_->left = NULL;
	newnode_->right = NULL;
	newnode_->parent = parent;

	if (parent->left)
	{
		newnode_->left = parent->left;
		parent->left->parent = newnode_;
	}
	parent->left = newnode_;

	return (newnode_);
}
