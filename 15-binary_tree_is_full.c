#include "binary_trees.h"
/**
* binary_tree_is_full - return if the tree is full
* @tree: the pointer of tree
* Return: 1 the node is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((tree->right && tree->left && tree->parent) ? 1 : 0);
}
