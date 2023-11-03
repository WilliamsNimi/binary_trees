#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - A right node adder
 * Desc: This function adds node to the right
 * @parent: The parent of the node
 * @value: The value of the node
 * Return: Returns pointer to the new node of NUll
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	return (new_node);
}
