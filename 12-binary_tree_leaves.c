#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves ina binary tree
 * @tree: a pointer to the root of the node to count the number of leaves
 * Return: 0 if the tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
