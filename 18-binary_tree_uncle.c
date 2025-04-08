#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to the uncle node, or NULL if none
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
	return (NULL);
}
