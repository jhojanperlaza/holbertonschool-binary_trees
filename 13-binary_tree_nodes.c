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
		return 0;
	int result = 0;
	if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
	{
		result++;
	}
	result += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return result;
}
