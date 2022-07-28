#include "binary_trees.h"
/**
 * size - size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size of a binary tree
 */

size_t size(const binary_tree_t *tree)
{
	size_t cont_left = 0;
	size_t cont_right = 0;

	if (tree == NULL)
		return (0);

	cont_left = 1 + size(tree->left);
	cont_right = 1 + size(tree->right);

	return (cont_left + cont_right);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	result = size(tree);
	return (result / 2);
}
