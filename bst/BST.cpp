//
// Created by Ben Johnson on 9/27/18.
//

#include "BST.h"

template <class T>
BST<T>::BST() {
    root = 0;
}

template<class T>
void BST<T>::insert(T data) {
    if (root == 0) {
        root = new BSTNode<T>(data);
        return;
    }
    root.insert(data);
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
