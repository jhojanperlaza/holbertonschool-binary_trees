#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: is a pointer to the root node of the tree
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->right));
	}
	else if (tree->left != NULL && tree->right == NULL)
	{
		return (1 + binary_tree_nodes(tree->left));
	}
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
