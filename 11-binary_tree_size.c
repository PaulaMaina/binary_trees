#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: Pointer to the node to measure the size
 *
 * Description: If tree is NULL, the function must return 0
 *
 * Return: Size of the tree otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree)
	{
		tree_size += 1;
		tree_size += binary_tree_size(tree->left);
		tree_size += binary_tree_size(tree->right);
	}

	return (tree_size);
}
