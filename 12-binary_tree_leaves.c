#include "binary_trees.h"
/**
* binary_tree_leaves - count the leaves of node
* @tree: the pointer of the tree
* Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t wr9a = 0;

	if (tree)
	{
		wr9a += (!tree->left && !tree->right) ? 1 : 0;
		wr9a += binary_tree_leaves(tree->left);
		wr9a += binary_tree_leaves(tree->right);
	}
	return (wr9a);
}

