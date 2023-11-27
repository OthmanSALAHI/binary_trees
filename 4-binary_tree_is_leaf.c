#include "binary_trees.h"
/**
* binary_tree_is_leaf - function that check if the node is leaf
* @node: the node to check
* Return: 1 if it is leaf otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((!node->left && !node->right) ? (1) : (0));
}
