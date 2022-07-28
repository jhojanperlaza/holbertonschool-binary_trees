#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree
 *
 * Return: leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to measure the balance factor
 *
 * Return: balance factor of a binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t n_left = 0;
	size_t n_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	n_left =  binary_tree_leaves(tree->left);
	n_right = binary_tree_leaves(tree->right);

	return (n_left - n_right);
}

