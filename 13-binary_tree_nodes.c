#include "binary_trees.h"
/**
* binary_tree_nodes - counts the node who have child
* @tree: the tree of nodes
* Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t count = 0;

	if (!tree)
		return (0);

	count += (tree->left || tree->right) ? 1 : 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
