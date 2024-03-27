#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: If tree is NULL, the function must return 0
 *
 * Return: Height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree)
	{
		height_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		height_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		if (height_left > height_right)
			return (height_left);
		else
			return (height_right);
	}
	return (0);
}
/**
 * binary_tree_balance - Measures the balance of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Description: If a tree is NULL, return 0
 *
 * Return: Balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree)
	{
		balance = (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	}

	return (balance);
}
