#ifndef TREES_BINARYTREENODE_H
#define TREES_BINARYTREENODE_H


class BinaryTreeNode {
public:
    BinaryTreeNode(int data, BinaryTreeNode *parent);

private:
    int data;
    BinaryTreeNode *parent, *left, *right;
};


#endif //TREES_BINARYTREENODE_H
