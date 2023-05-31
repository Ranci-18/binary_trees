#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: root node of a binary tree
*
* Return: 1 if tree is full. 0 if not full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (1);
}
