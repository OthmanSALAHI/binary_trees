#include "binary_trees.h"
/**
* binary_tree_size - function count the size from node
* @tree: the pointer of the tree
* Return: size_t of the size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count += 1;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);

	return (count);
}
