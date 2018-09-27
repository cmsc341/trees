cmake_minimum_required(VERSION 3.12)
project(trees)

set(CMAKE_CXX_STANDARD 14)

add_executable(trees
    main.cpp
        regular/RegularNode.cpp
        regular/RegularNode.h
        regular/RegularTree.cpp
        regular/RegularTree.h
        regular/RegularNodeIterator.h
        regular/RegularNodeIterator.cpp
        binary/BinaryTree.cpp
        binary/BinaryTree.h
        binary/BinaryTreeNode.cpp
        binary/BinaryTreeNode.h
        binary/BinaryTreeIterator.cpp
        binary/BinaryTreeIterator.h
        bst/BST.cpp
        bst/BST.h
        bst/BSTIterator.cpp
        bst/BSTIterator.h
        bst/BSTNode.h
        bst/BSTNode.cpp
        )
