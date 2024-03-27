#include "binary_trees.h"

/**
 * is_full - Recursively checks if a binary is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if it is full otherwise 0
 */

int is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			(is_full(tree->left) == 0) ||
			(is_full(tree->right) == 0))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the bianry tree is full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full(tree));
}
