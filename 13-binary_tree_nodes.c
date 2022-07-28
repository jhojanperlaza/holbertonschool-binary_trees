#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t if_root = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		if_root = 1;

	if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL))
		return (1);

	return (binary_tree_nodes(tree->left) +
	binary_tree_nodes(tree->right) + if_root);
}
