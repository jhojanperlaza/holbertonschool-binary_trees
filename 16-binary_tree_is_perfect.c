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
	int n = 0, m = 0;

	if (tree == NULL)
		return (0);


	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		n = binary_tree_is_perfect(tree->left);
		m = binary_tree_is_perfect(tree->right);
		if (n == m)
			return (1);
	}

	return (0);
}
