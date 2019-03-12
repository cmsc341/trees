//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTNode.h"

void BSTNode::insert(int i) {
    if (i < m_data) {
        if (m_left == nullptr) {
            m_left = new BSTNode(i, this);
        } else {
            m_left->insert(i);
        }
    } else {
        if (m_right == nullptr) {
            m_right = new BSTNode(i, this);
        } else {
            m_right->insert(i);
        }
    }
}

BSTNode::BSTNode(int i, BSTNode * parent) {
    m_parent = parent;
    m_data = i;
    m_left = nullptr;
    m_right = nullptr;
}
