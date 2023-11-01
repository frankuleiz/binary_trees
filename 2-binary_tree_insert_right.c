#include "binary_trees.h"
/*
 * binary_tree_insert_right - inserts a node as the right child 
 * @parent: the pointer to the parent node
 * @value: the value of the node to be insertedi
 * Return: the pointer to the created node
 *      NULL on failure
 *      NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (!parent)
        return NULL;

    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return (NULL);
    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = parent->right;
    parent->right = new;

    if (new->right)
        new->right->parent = new;

    return (new);
}
