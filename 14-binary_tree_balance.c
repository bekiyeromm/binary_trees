#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height
 * of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the height
 * Return: if a tree is null must return 0
*/
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree)
	{
		left_height = 1 + binary_tree_height_b(tree->left);
		right_height = 1 + binary_tree_height_b(tree->right);
	}
	return ((left_height > right_height) ? left_height : right_height);
}
/**
* binary_tree_balance - a function that measures the balance
* factor of a binary tree
* @tree: is a pointer to the root node of the tree to measure
* the balance factor
* Return: If tree is NULL, return 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
