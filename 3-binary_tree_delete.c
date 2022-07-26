#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: a pointer to the new node, or NULL if  failure
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Delete Left sub-tree */
	binary_tree_delete(tree->left);
	/* Delete right sub-tree */
	binary_tree_delete(tree->right);
	free(tree);
}
