#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Create a queue for level order traversal */
	/* Using an array-based queue for simplicity in this example */
	const binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1000);
	int front = 0, rear = 0;

	queue[rear++] = tree;

	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];

		/* If we encountered a NULL node, break the loop */
		if (!current)
			break;

		/* Enqueue left child */
		queue[rear++] = current->left;

		/* Enqueue right child */
		queue[rear++] = current->right;
	}

	/* Check if there are any non-NULL nodes after a NULL node */
	for (; front < rear; front++)
	{
		if (queue[front] != NULL)
		{
			free(queue);
			return (0);
		}
	}

	free(queue);
	return (1);
}
