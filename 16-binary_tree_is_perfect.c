#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: root node of a binary tree
*
* Return: 1 if tree is full. 0 if not full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
* calculate_height - calculates height of the subtree
* @tree: root of the binary tree
*
* Return: 0 if tree is NULL. height of left subtree
*/
size_t calculate_height(const binary_tree_t *tree)
{
	size_t left, right = 0;

	if (tree == NULL)
		return (0);
	left = calculate_height(tree->left);
	right = calculate_height(tree->right);

	return (1 + (left > right) ? left : right);
}

/**
* binary_tree_is_perfect - checks if binary tree is perfect
* @tree: root node of binary tree
*
* Return: 1 if tree is perfect. 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full = 0;
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	is_full = binary_tree_is_full(tree);
	left_height = calculate_height(tree->left);
	right_height = calculate_height(tree->right);

	if ((left_height == right_height) && is_full == 1)
		return (1);
	return (0);
}
