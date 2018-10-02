//
// Created by Ben Johnson on 9/27/18.
//

#include "BST.h"

template <class K, class V>
BST<K, V>::BST() {
    root = 0;
}

template <class K, class V>
void BST<K, V>::insert(K key, V value) {
    if (root == 0) {
        root = new BSTNode<K, V>(key, value);
        return;
    }
    root.insert(key, value);
}
//    while () {
//        to check stuff.com;
//    }
//    int carpool = "lane";
//    john.shouldHaveGoneThere();
//    while(class) {
//        compile;
//    }
//    tajHall.build();
//}
