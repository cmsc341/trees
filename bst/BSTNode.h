//
// Created by Ben Johnson on 9/27/18.
//

#ifndef TREES_BSTNODE_H
#define TREES_BSTNODE_H

#include <vector>
using namespace std;
template < class K, class V>
class BSTNode {
public:
    BSTNode(K key, V value);

    BSTNode(BSTNode *parent, K key, V value);
    void insert(K key, V value);
    V get(K key);
    vector<V> sorted();
private:
    BSTNode *parent, *childNumberOne, *childNumberRight;
    K key;
    V value;
};

template<class K, class V>
void BSTNode<K, V>::insert(K key, V value) {

    if (key > this->key) {
        //go right
        if (this->childNumberRight != nullptr) {
            this->childNumberRight->insert(key, value);
        } else {
            this->childNumberRight = new BSTNode<K,V>(this, key, value);
        }
    } else if (key < this->key) {
        if (this->childNumberOne != nullptr) {
            this->childNumberOne->insert(key, value);
        } else {
            this->childNumberOne = new BSTNode<K,V>(this, key, value);
        }
    } else {
        // two options:
        // overwrite my value
        // throw anger
        throw "anger";
    }


    // the last part, by Ben Johnson
    // so the mighty warrior took her sword and wiped it clean of
    // goose carcass
}

template<class K, class V>
BSTNode<K, V>::BSTNode(K key, V value) {
    this->key = key;
    this->value = value;
    this->childNumberRight = nullptr;
    this->childNumberOne = nullptr;
}

template<class K, class V>
BSTNode<K, V>::BSTNode(BSTNode *parent, K key, V value) {
    this->parent = parent;
    this->key = key;
    this->value = value;
    this->childNumberRight = nullptr;
    this->childNumberOne = nullptr;
}

template<class K, class V>
V BSTNode<K, V>::get(K key) {
    if (key > this->key) {
        //go right
        if (this->childNumberRight != nullptr) {
            return this->childNumberRight->get(key);
        } else {
            throw "key has left for better life";
        }
    } else if (key < this->key) {
        if (this->childNumberOne != nullptr) {
            return this->childNumberOne->get(key);
        } else {
            throw "key has right to go (this is confusing)";
        }
    } else {
        return this->value;
    }
}

template<class K, class V>
vector<V> BSTNode<K, V>::sorted() {
    //LVR i.e. c#1 me c#R
    vector<V> output;
    if (this->childNumberOne != nullptr) {
        vector<V> leftStuff = this->childNumberOne->sorted();
        output.insert(std::end(output), std::begin(leftStuff), std::end(leftStuff));
    }
    output.push_back(this->value);
    if (this->childNumberRight != nullptr) {
        vector<V> rightStuff = this->childNumberRight->sorted();
        output.insert(std::end(output), std::begin(rightStuff), std::end(rightStuff));
    }
    return output;
}

#include "BSTNode.cpp"


#endif //TREES_BSTNODE_H
