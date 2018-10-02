cmake_minimum_required(VERSION 3.12)
project(trees)

set(CMAKE_CXX_STANDARD 14)

add_executable(bst
    main.cpp
        bst/BST.cpp
        bst/BST.h
        bst/BSTIterator.cpp
        bst/BSTIterator.h
        bst/BSTNode.h
        bst/BSTNode.cpp
        )
