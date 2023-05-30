#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of node
 *@tree: the node to measure the depth of
 *
 *
 *Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
