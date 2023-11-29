#include "binary_trees.h"
/**
* binary_tree_uncle - function that give us the uncle of node
* @node: the pointer of the node
* Return: uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
