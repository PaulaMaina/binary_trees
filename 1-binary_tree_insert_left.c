#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: If the parent node already has a left node, the new node
 * 		must take its place and the old left child must be set
 * 		as the left-child of the new node
 * Return: pointer to the created node or NULL on failure or
 * 	   if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (parent == NULL || new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
