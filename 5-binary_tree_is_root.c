#include "binary_trees.h"
/**
* binary_tree_is_root - checks if the node is root
* @node: the need we need to check
* Return: 1 if true 0 if false
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((!node->parent) ? 1 : 0);
}
