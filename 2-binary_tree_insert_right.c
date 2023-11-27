#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}


