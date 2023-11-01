#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left child
* @value: the value to be inserted
* @parent: pointer to the parent node
* Return: pointer to the new node or
*   NULL on failure or
*   NULL if the parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (!parent)
return (NULL);

new = malloc(sizeof(binary_tree_t));
if (!new)
return (NULL);

new->n = value;
new->parent = parent;
new->right = NULL;
new->left = parent->left;
parent->left = new;

if (new->left)
{
new->left->parent = new;
}
return (new);

}
