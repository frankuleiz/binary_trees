#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is root
 * @node: the pointer to the node to check if root
 * Return: 1 or 0 if not root or if NULL
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL);
}
