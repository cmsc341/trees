//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BST_H
#define TREES_BST_H


#include "BSTNode.h"
#include <vector>
using namespace std;
template <class T>
class BST {
public:
    BST();
    void insert(T data);
    vector<BSTIterator> sortedData();
private:
    BSTNode root;
};


#endif //TREES_BST_H
