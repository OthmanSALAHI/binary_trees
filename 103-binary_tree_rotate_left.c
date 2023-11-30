#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree || !tree->right)
		return (NULL);

	binary_tree_t *P, *tmp;

	P = tree->right;
	tmp = P->left;
	P->left = tree;
	tree->right = tmp;

	if (tmp)
		tmp->parent = tree;

	tmp = tree->parent;
	tree->parent = P;
	P->parent = tmp;

	if (tmp)
	{
		if (tmp->left == tree)
			tmp->left = P;
		else
			tmp->right = P;
	}

	return (P);
}
