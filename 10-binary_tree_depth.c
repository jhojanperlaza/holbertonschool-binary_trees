#include "binary_trees.h"
/**
 * Depth - get the depth of node
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: the depth of the node + 1
 */

size_t Depth(const binary_tree_t *tree)
{
	size_t cont_parent = 0;

	if (tree == NULL)
		return (0);

	cont_parent = 1 + Depth(tree->parent);

	return (cont_parent);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: the depth of node in the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	result = Depth(tree);
	return (result - 1);
}
