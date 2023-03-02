#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes
 * Return: f tree is NULL, the function must return 0
 * ,A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		count = 1;
	}
		count = count + binary_tree_nodes(tree->left);
		count = count + binary_tree_nodes(tree->right);
	return (count);
}
