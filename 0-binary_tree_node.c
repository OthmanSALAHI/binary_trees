#include "binary_trees.h"

/**
* binary_tree_node - function that create the node
* @parent: the parent of the node
* @value: the value of the node
* Return: the node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newTree;

	newTree = malloc(sizeof(binary_tree_t));
	if (!newTree)
		return (NULL);
	if (newTree)
	{
		newTree->n = value;
		newTree->parent = parent;
		newTree->left = NULL;
		newTree->right = NULL;
	}
	return (newTree);
}
