#include "binary_trees.h"

/**
 * binary_tree_height_bc - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height_bc(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree)
		{
			left_h = tree->left ? 1 + binary_tree_height_bc(tree->left) : 1;
			right_h = tree->right ? 1 + binary_tree_height_bc(tree->right) : 1;
		}
		return ((left_h > right_h) ? left_h : right_h);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = (tree->left ? binary_tree_height(tree->left) + 1 : 0);
	right_height = (tree->right ? binary_tree_height(tree->right) + 1 : 0);

	return (left_height - right_height);
}

