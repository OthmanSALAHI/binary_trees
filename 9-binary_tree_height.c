#include "binary_trees.h"
/**
* binary_tree_height - count the height of tree
* @tree: the tree to test
* Return: the height of tree from the node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lisr = 0, limn = 0;

		lisr = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		limn = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lisr > limn) ? lisr : limn);
	}
	return (0);
}
