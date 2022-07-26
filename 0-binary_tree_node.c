#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL if  failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent = NULL;

	new_parent = malloc(sizeof(binary_tree_t));
	if (!new_parent)
		return (NULL);

	new_parent->n = value;
	new_parent->parent = parent;
	new_parent->left = NULL;
	new_parent->right = NULL;
	return (new_parent);
}
