#include "binary_trees.h"
/**
* binary_tree_depth - function that count the depth of tree
* @tree: the pointer of the tree that want the depth
* Return: the depth of each node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
