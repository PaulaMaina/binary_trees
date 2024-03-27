#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Description: If tree is NULL, the function must return 0
 * A null pointer is not a leaf
 *
 * Return: Size of the tree otherwise 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			tree_leaves += 1;
		}

		tree_leaves += binary_tree_leaves(tree->left);
		tree_leaves += binary_tree_leaves(tree->right);
	}

	return (tree_leaves);
}
