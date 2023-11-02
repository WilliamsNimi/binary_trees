#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - A node creator
 * Desc: This function creates a binary tree node
 * @parent: The parent of the tree
 * @value: The value of the node
 * Return: Returns pointer to the new node of NUll
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		parent->n = value;
		parent->left = NULL;
		parent->right = NULL;
	}
	new_node = malloc(sizeof(binary_tree_t));
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	return (new_node);
}
