#include "binary_trees.h"
/**
* calculate_left_height - calculates height of the left subtree
* @tree: root of the binary tree
*
* Return: 0 if tree is NULL. height of left subtree
*/
size_t calculate_left_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);
	height = calculate_left_height(tree->left);
	return (height + 1);
}

/**
* calculate_right_height - calculates height of the right subtree
* @tree: root of the binary tree
*
* Return: 0 if tree is NULL. height of left subtree
*/
size_t calculate_right_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);
	height = calculate_right_height(tree->right);
	return (height + 1);
}

/**
* binary_tree_balance - checks the balance of a binary tree
* @tree: root of the binary tree
*
* Return: 0 if tree is NULL. height of left subtree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (!tree)
		return (0);
	balance = calculate_left_height(tree) - calculate_right_height(tree);
	return (balance);
}
