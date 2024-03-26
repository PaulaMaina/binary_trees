#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Description: If tree is NULL, the function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	tree_depth = (tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;

	return (tree_depth);
}
