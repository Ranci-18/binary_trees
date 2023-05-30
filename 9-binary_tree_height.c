#include "binary_trees.h"
/**
 *check_height - calculates height of binary tree
 *@tree: root node of binary tree
 *
 *
 *Return: height
 */
size_t check_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = check_height(tree->left);
	right_height = check_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 *binary_tree_height - function calls check_height to calculate height
 *@tree: root node of binary tree
 *
 *
 *
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_height(tree) - 1);
}
