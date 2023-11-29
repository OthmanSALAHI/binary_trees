#include "binary_trees.h"
/**
* binary_tree_uncle - function that give us the uncle of node
* @node: the pointer of the node
* Return: uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = binary_tree_sibling(father);
	binary_tree_t *father;

	if (!node)
		return (NULL);
	father = node->parent;
	return (uncle);
}
