#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: pointer to the node to check
 *
 * Description: If the node is NULL, return 0
 *
 * Return: 1 if the node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}