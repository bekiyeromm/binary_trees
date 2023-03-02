#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: must return 1 if node is a leaf, 0 if null or otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if ((node->left) == NULL && (node->right) == NULL)
	{
		return (1);
	}
	return (0);
}
