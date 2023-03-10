#include <stdio.h>
#include "BinaryTree2.h"
#include "BinaryTree2.c"

void ShowIntData(int data);

int main(void)
{
    BTreeNode * bt1 = MakeBTreeNode();
    BTreeNode * bt2 = MakeBTreeNode();
    BTreeNode * bt3 = MakeBTreeNode();
    BTreeNode * bt4 = MakeBTreeNode();
    BTreeNode * bt5 = MakeBTreeNode();
    BTreeNode * bt6 = MakeBTreeNode();

    setData(bt1, 1);
    setData(bt2, 2);
    setData(bt3, 3);
    setData(bt4, 4);
    setData(bt5, 5);
    setData(bt6, 6);

    MakeLeftSubTree(bt1, bt2);
    MakeRightSubTree(bt1, bt3);
    MakeLeftSubTree(bt2, bt4);
    MakeRightSubTree(bt2, bt5);
    MakeRightSubTree(bt3, bt6);

    PreorderTraverse(bt1, ShowIntData);
    printf("\n");
    InorderTraverse(bt1, ShowIntData);
    printf("\n");
    PostorderTraverse(bt1, ShowIntData);
    printf("\n");
    return 0;
//1 2 4 5 3 6 
//4 2 5 1 3 6 
//4 5 2 6 3 1 
}

void ShowIntData(int data)
{
    printf("%d ",data);
}