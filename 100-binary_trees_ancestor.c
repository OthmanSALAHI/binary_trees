#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor, or NULL if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *agadir;
	binary_tree_t *dakhla;

	if (!first || !second)
		return (NULL);

	if (second == first)
		return ((binary_tree_t *)second);

	dakhla = first->parent;
	agadir = second->parent;

	if (first == agadir || !dakhla || (!dakhla->parent && agadir))
		return (binary_trees_ancestor(first, agadir));
	else if (second == dakhla || !agadir || (!agadir->parent && dakhla))
		return (binary_trees_ancestor(second, dakhla));

	return (binary_trees_ancestor(dakhla, agadir));
}
