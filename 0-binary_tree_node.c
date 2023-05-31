#include "binary_trees.h"
/**
 *binary_tree_node - creates a new node with no children
 *@parent: parent node
 *@value: new node data
 *
 *
 *Return: new node pointer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
