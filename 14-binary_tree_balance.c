#include "binary_trees.h"
/**
* calculate_height - calculates height of the subtree
* @tree: root of the binary tree
*
* Return: 0 if tree is NULL. height of left subtree
*/
size_t calculate_height(const binary_tree_t *tree)
{
	size_t left, right = 0;

	if (!tree)
		return (0);
	left = calculate_height(tree->left);
	right = calculate_height(tree->right);
	left += 1;
	right += 1;
	return ((left > right) ? left : right);
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
	balance = calculate_height(tree->left) - calculate_height(tree->right);
	return (balance);
}
