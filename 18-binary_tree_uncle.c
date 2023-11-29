#include "binary_trees.h"
/**
* binary_tree_uncle - function that give us the uncle of node
* @node: the pointer of the node
* Return: uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	binary_tree_t *father;
	binary_tree_t *uncle ;

	father = node->parent;
	uncle = binary_tree_sibling(father);
	if (!uncle)
		return (NULL);
	return (uncle);
}
