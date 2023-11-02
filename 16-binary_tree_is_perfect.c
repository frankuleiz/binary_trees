#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a bianry tree
 * @tree: a pointer to the root of the tree to measure height
 * Return: 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: a pointer to the root node of the tree to check
* Return: 0 if the tree is NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root of the tree to check
 * Return: ) if the tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_height(tree);

	return (binary_tree_is_full(tree) && size == (size_t)((1 << height) - 1));
}
