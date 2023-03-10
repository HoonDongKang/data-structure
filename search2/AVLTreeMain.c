#include <stdio.h>
#include "../search1/BinaryTree3.h"
#include "../search1/BinaryTree3.c"
#include "BinarySearchTree3.h"
#include "BinarySearchTree3.c"

int main(void)
{
	BTreeNode * avlRoot;
	BTreeNode * clNode;		// current left node
	BTreeNode * crNode;		// current right node
	BSTMakeAndInit(&avlRoot);

	BSTInsert(&avlRoot, 1);
	BSTInsert(&avlRoot, 2);
	BSTInsert(&avlRoot, 3);
	BSTInsert(&avlRoot, 4);
	BSTInsert(&avlRoot, 5);
	BSTInsert(&avlRoot, 6);
	BSTInsert(&avlRoot, 7);
	BSTInsert(&avlRoot, 8);
	BSTInsert(&avlRoot, 9);

	printf("Root Node: %d \n", GetData(avlRoot));

	clNode = GetLeftSubTree(avlRoot);
	crNode = GetRightSubTree(avlRoot);
	printf("left1: %d, right1: %d \n", GetData(clNode), GetData(crNode));

	clNode = GetLeftSubTree(clNode);
	crNode = GetRightSubTree(crNode);
	printf("left2: %d, right2: %d \n", GetData(clNode), GetData(crNode));

	clNode = GetLeftSubTree(clNode);
	crNode = GetRightSubTree(crNode);
	printf("left3: %d, right3: %d \n", GetData(clNode), GetData(crNode));

	clNode = GetLeftSubTree(clNode);
	crNode = GetRightSubTree(crNode);
	printf("left4: %d, right4: %d \n", GetData(clNode), GetData(crNode));
	return 0;
}