#include "binary_trees.h"
/**
 * binary_tree_depth - depth of node
 * @tree: Pointer to the node
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
