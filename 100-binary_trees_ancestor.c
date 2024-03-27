#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Lowest common ancestor node or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *anc_1, *anc_2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	anc_1 = first->parent;
	anc_2 = second->parent;

	if (first == anc_2 || !anc_1 || (!anc_1->parent && anc_2))
		return (binary_trees_ancestor(first, anc_2));
	else if (anc_1 == second || !anc_2 || (!anc_2->parent && anc_1))
		return (binary_trees_ancestor(anc_1, second));

	return (binary_trees_ancestor(anc_1, anc_2));
}
