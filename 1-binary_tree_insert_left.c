#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - A left node adder
 * Desc: This function adds a nodeto the left of a binary tree node
 * @parent: The parent of the node
 * @value: The value of the node
 * Return: Returns pointer to the new node of NUll
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else if (parent->left != NULL)
	{
		new_node->left = parent->left->left;
		parent->left = new_node;
	}
	return (new_node);
}
