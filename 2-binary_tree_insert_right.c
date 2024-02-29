#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child.
 *
 * @parent: pointer to the node to insert the right-child in.
 *
 * @value: value of the new node.
 *
 * Return: pointer to created node, or NULL on failuer.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode_;

	if (parent == NULL)
	{
		return (NULL);
	}

	newnode_ = parent->right;
	if (parent->right)
	{
		parent->right = binary_tree_node(parent, value);

		if (!parent->right)
		{
			return (NULL);
		}

		parent->right->right = newnode_;
		newnode_->parent = parent->right;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
