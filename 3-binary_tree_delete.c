#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree and frees memory
 * @tree: Pointer to the root node of the tree to be deleted
 *
 * This function frees the memory of the tree and all its nodes
 * recursively.
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree != NULL)
	{

		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);

		free(tree);
	}
}
