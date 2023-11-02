#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - The leaf function
 * Desc: Checks if a node is a leaf node
 * @node: The node to check
 * Return: returns 1 if leaf, and 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
