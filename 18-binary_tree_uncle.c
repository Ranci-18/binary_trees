#include "binary_trees.h"
/**
* binary_tree_uncle - returns uncle of a node
* @node: pointer to the node to find the uncle
*
* Return: pointer to node of the uncle. NULL otherwise
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
