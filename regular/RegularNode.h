//
// Created by Ben Johnson on 9/24/18.
//

#ifndef TREES_REGULARNODE_H
#define TREES_REGULARNODE_H

#include <vector>
using namespace std;
class RegularNode {
public:
    RegularNode(int data);

    RegularNode(int data, RegularNode *parent);

private:
    int data;
    vector<RegularNode *> children;
    RegularNode * parent;
};


#endif //TREES_REGULARNODE_H
