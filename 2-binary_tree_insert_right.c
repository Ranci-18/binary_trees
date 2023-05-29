#include "binary_trees.h"
/**
 *binary_tree_insert_right - creates right child for parent
 *@parent: parent node
 *@value: data of new right child
 *
 *
 *
 *
 *Return: pointer to new right child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_node;
	parent->right = new_node;
	return (new_node);
}
