#include "binary_trees.h"

/**
 * perfect_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: If tree is NULL, the function must return 0
 *
 * Return: Height of the binary tree
 */

size_t perfect_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree)
	{
		height_left = tree->left ? 1 + perfect_tree_height(tree->left) : 0;
		height_right = tree->right ? 1 + perfect_tree_height(tree->right) : 0;

		if (height_left == height_right ||
				((height_left >= 2 && height_right >= 2) &&
				(height_left > height_right)))
			return (1);
		else
			return (0);
	}
	return (0);
}

/**
 * is_perfect - Recursively if a binary is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Description: If the tree height is 0 or NULL, return 0
 *
 * Return: 1 if it is perfect otherwise 0
 */

int is_perfect(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (perfect_tree_height(tree) == 0)
			return (0);

		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			(is_perfect(tree->left) == 0) ||
			(is_perfect(tree->right) == 0))
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the bianry tree is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect(tree));
}
