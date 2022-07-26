#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the new node, or NULL if  failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child = NULL;

	if (parent == NULL)
		return (NULL);

	new_right_child = malloc(sizeof(binary_tree_t));
	if (!new_right_child)
		return (NULL);

	new_right_child->n = value;
	new_right_child->parent = parent;
	new_right_child->left = NULL;
	new_right_child->right = NULL;

	if (parent->right == NULL)
		parent->right = new_right_child;
	else
	{
		new_right_child->right = parent->right;
		parent->right->parent = new_right_child;
		parent->right = new_right_child;
	}

	return (new_right_child);
}
