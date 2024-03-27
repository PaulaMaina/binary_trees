#include "binary_trees.h"

/**
 * node_is_leaf - Checks if the node is a leaf node
 * @node: Pointer to the node
 *
 * Return: 1 if node is a leaf else 0
 */

unsigned char node_is_leaf(binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * node_depth - Measures the depth of a node in a tree
 * @node: Pointer to the node in the tree
 *
 * Return: Depth of the node
 */

size_t node_depth(binary_tree_t *node)
{
	size_t depth = 0;

	if (tree->parent != NULL)
		depth += 1;

	node_depth(tree->parent);

	return (depth);

}

/**
 * find_leaf - Returns a leaf in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Pointer to the first leaf
 */

const binary_tree_t *find_leaf(const binary_tree_t *tree)
{
	if (node_is_leaf(tree) == 1)
		return (tree);
	if (tree->left)
		return (find_leaf(tree->left));
	else
		return (find_leaf(tree->right));
}

/**
 * is_perfect - Recursively checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * @leaf_depth: Depth of a leaf in a tree
 * @level: Level of the current node
 *
 * Return: 1 if the tree is perfect otherwise 0
 */

int is_perfect(const binary_tree_t *tree, size_t leaf_depth, size_t level)
{
	if (node_is_leaf(tree))
		if (level == leaf_depth)
			return (1);
		else
			return (0);

	if (tree->left == NULL || tree->height == NULL)
		return (0);

	return (is_perfect(tree->left, leaf_depth, level + 1) &&
			is_perfect(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a tree is a perfect binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is prefect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	return (is_perfect(tree, node_depth(find_leaf(tree)), 0));
}
