#include "binary_trees.h"
/**
  * binary_tree_uncle - a function that finds the uncle of a node
  * @node: is a pointer to the node to find the uncle
  * Return: must return a pointer to the uncle node, or NULL,if
  * node is null or node has no uncle.
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	return (node->parent->parent->right);
}
