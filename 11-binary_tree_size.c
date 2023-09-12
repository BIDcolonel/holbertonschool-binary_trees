#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
* Return: size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_node;
	size_t right_node;
	size_t size;

	if (tree == NULL)
		return (0);

	left_node = binary_tree_size(tree->left);
	right_node = binary_tree_size(tree->right);

	size = left_node + right_node + 1;

	return (size);
}
