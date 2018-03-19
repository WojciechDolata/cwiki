//
// Created by dolawojc on 3/18/18.
//

#include "SmartTree.h"
#include <ostream>
#include <string>
#include <memory>
#include <stdio.h>


namespace datastructures {
    std::unique_ptr <SmartTree> CreateLeaf(int value){
        std::unique_ptr <SmartTree> a = std::make_unique<SmartTree>();
        a->value = value;
        a->left = nullptr;
        a->right = nullptr;
        return a;
    }

    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree) {
        if(tree->left == nullptr) {
            tree->left = std::move(left_subtree);
            return tree;
        }
        return 0;

    }
    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree) {
        if(tree->right == nullptr) {
            tree->right = std::move(right_subtree);
            return tree;
        }

        return 0;
    }
    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out) {
        if ( unique_ptr != nullptr) {
            PrintTreeInOrder( unique_ptr->left, out);
            *out << unique_ptr->value << ", ";
            PrintTreeInOrder( unique_ptr->right, out);
        }


    }
    std::string DumpTree(const std::unique_ptr<SmartTree> &tree) {
        int current_depth=1;
        std::string tree_string = "";
        tree_string += "[ " + std::to_string(tree->value);
    }
    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree){

    }
}