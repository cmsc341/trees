//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H


class BSTNode {
private:
    int m_data;
    BSTNode * m_left, * m_right, * m_parent;

public:
    BSTNode(int i, BSTNode * parent);

    void insert(int dataToInsert);

    bool find(int i);

    void remove(int dataToRemove);

    void removeMe();

    std::vector<BSTNode> cousins():

    BSTNode *getSuccessor();

    void swapWith(BSTNode *swapBuddy);
};


#endif //TREES_BSTNODE_H
