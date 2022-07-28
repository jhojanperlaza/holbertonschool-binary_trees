#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to perfect
 *
 * Return: if a binary tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes = 0;

	nodes = height_recursion(tree);

	if (nodes % 2 == 0)
		return (0);

	return (1);
}
