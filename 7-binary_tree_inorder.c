#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes thorugh a tree using inorder traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function call for each node. The value in the node
 * must be passed as a parameter to this function
 *
 * Description: If tree or func is null, do nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
