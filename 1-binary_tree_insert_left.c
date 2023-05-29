#include "binary_trees.h"
/**
 *binary_tree_insert_left - creates new node as left child of parent
 *@parent: parent node
 *@value: value of the new node
 *
 *
 *Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = new_node;
	parent->left = new_node;
	return (new_node);
}
