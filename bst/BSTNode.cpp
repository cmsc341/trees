//
// Created by Ben Johnson on 9/27/18.
//

#include "BSTNode.h"

void BSTNode::insert(int dataToInsert) {
    if (dataToInsert < m_data) {
        if (m_left == nullptr) {
            m_left = new BSTNode(dataToInsert, this);
        } else {
            m_left->insert(dataToInsert);
        }
    } else {
        if (m_right == nullptr) {
            m_right = new BSTNode(dataToInsert, this);
        } else {
            m_right->insert(dataToInsert);
        }
    }
}

BSTNode::BSTNode(int i, BSTNode * parent) {
    m_parent = parent;
    m_data = i;
    m_left = nullptr;
    m_right = nullptr;
}

bool BSTNode::find(int dataToFind) {
    if (m_data == dataToFind) {
        return true;
    }
    if (dataToFind < m_data) {
        if (m_left == nullptr) {
            return false;
        } else {
            return m_left->find(dataToFind);
        }
    } else {
        if (m_right == nullptr) {
            return false;
        } else {
            return m_right->find(dataToFind);
        }
    }
}

void BSTNode::remove(int dataToRemove) {
    if (m_data == dataToRemove) {
        this->removeMe();
    }
    if (dataToRemove < m_data) {
        if (m_left == nullptr) {
            // TODO exception!
        } else {
            m_left->remove(dataToRemove);
        }
    } else {
        if (m_right == nullptr) {
            // TODO exception!
        } else {
            m_right->remove(dataToRemove);
        }
    }
}

void BSTNode::removeMe() {
    BSTNode * successor = this->getSuccessor();
    if (successor) {
        swapWith(successor);
    }
    updateParent(this);

}

BSTNode *BSTNode::getSuccessor() {
    if (not m_right) {
        return nullptr;
    }
    BSTNode * current = m_right;
    while (current->m_left) {
        current = current->m_left;
    }
    return current;
}

void BSTNode::swapWith(BSTNode *swapBuddy) {
    BSTNode *tempLeft = swapBuddy->m_left;
    BSTNode *tempRight = swapBuddy->m_right;
    BSTNode *tempParent = swapBuddy->m_parent;

    swapBuddy->m_left = m_left;
    swapBuddy->m_right = m_right;
    swapBuddy->m_parent = m_parent;

    m_left = tempLeft;
    m_right = tempRight;
    m_parent = tempParent;


}
