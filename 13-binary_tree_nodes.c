#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		num_nodes++;

	num_nodes += binary_tree_nodes(tree->left);
	num_nodes += binary_tree_nodes(tree->right);
	return (num_nodes);
}
