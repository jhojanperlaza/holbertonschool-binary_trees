#include "binary_trees.h"
/**
 * height_recursion - goes through a binary tree using post-order traversal
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree
 */

size_t height_recursion(const binary_tree_t *tree)
{
	size_t cont_left = 0;
	size_t cont_right = 0;

	if (tree == NULL)
		return (0);

	cont_left = 1 + height_recursion(tree->left);
	cont_right = 1 + height_recursion(tree->right);

	if (cont_left > cont_right)
		return (cont_left);
	else
		return (cont_right);
}

/**
 * binary_tree_height - height of a binary tree with recursively
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
		return (0);

	result = height_recursion(tree);
	return (result - 1);
}
