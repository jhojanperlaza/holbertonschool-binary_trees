#include "binary_trees.h"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: if a binary tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes = 0;

	nodes = binary_tree_size(tree);

	if (nodes % 2 == 0)
		return (0);

	return (1);
}
