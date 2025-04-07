#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth of
 *
 * Return: Depth of the node. Returns 0 if the node is NULL or if it's the root
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	return (binary_tree_depth(tree->parent) + 1);
}
