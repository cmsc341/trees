//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H


class BSTNode {

public:
  BSTNode(BSTNode *parent, int data);

  void insert(int data);
  void swap(BSTNode * other);

  void dump();

private:
  BSTNode * subtreeSuccessor();
  BSTNode * _parent, *_left, *_right;
  int _data;
};


#endif //TREES_BSTNODE_H
