#include "binary_trees.h"
/**
  * binary_tree_size - a function that measures the size of a binary tree
  * @tree: is a pointer to the root node of the tree to measure the size
  * Return: If tree is NULL, the function must return 0
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_size(tree->left);
		right_height = binary_tree_size(tree->right);
		size = left_height + right_height + 1;
	}
	return (size);
}
