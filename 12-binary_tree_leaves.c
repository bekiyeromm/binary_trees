#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: s a pointer to the root node of the tree to count the
 * number of leaves
 * Return: If tree is NULL, the function must return 0
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	num_leaves += binary_tree_leaves(tree->left);
	num_leaves += binary_tree_leaves(tree->right);
	return (num_leaves);
}
