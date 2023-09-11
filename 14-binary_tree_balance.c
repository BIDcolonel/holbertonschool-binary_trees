#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 * Return: The balance factor of the binary tree. It's calculated as the
 * difference in height between the left and right subtrees. A positive
 * value indicates that the right subtree is deeper, a negative value
 * indicates that the left subtree is deeper, and 0 indicates a balanced tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (right_height - left_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 * Return: The height of the binary tree. The height is defined as the
 * length of the longest path from the root node to a leaf node
 */
int binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (1 + MAX(left_height, right_height));
}
