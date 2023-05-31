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
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

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
		return (1);

	if (tree->left)
		left_height = check_height(tree->left);
	if (tree->right)
		right_height = check_height(tree->right);

	if ((left_height - right_height) > 1)
		return (0);
	return (1);
}

/**
* binary_tree_is_perfect - checks if binary tree is perfect
* @tree: root node of binary tree
*
* Return: 1 if tree is perfect. 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance = 0, is_full = 0;

	if (!tree)
		return (1);

	balance = check_height(tree);
	is_full = binary_tree_is_full(tree);

	if (balance == 0 && is_full == 1)
		return (1);
	return (0);
}
