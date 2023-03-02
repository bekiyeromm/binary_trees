#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: must return a pointer to the created node, or
 * NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	temp = binary_tree_node(parent, value);
	if (temp == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;
	return (temp);
}
