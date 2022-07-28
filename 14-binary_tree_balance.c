#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to measure the balance factor
 *
 * Return: balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int n_left = 0, n_right = 0;

	if (tree == NULL)
		return (0);

	n_left =  height_recursion(tree->left);
	n_right = height_recursion(tree->right);

	return (n_left - n_right);
}

