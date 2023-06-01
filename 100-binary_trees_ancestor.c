#include "binary_trees.h"
/**
* binary_trees_ancestor - finds the lowest common ancestor of 2 nodes
* @first: pointer to the 1st node
* @second: pointer to the 2nd node
*
* Return: pointer to lowest common ancestor node. NULL otherwise
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *second_tmp;

	if (!first || !second)
		return (NULL);
	while (first)
	{
		second_tmp = second;
		while (second_tmp)
		{
			if (first == second_tmp)
				return ((binary_tree_t *)first);
			second_tmp = second_tmp->parent;
		}
	first = first->parent;
	}
	return (NULL);
}
