//
// Created by בר נחמיאס on 16/05/2022.
//

#ifndef ORGCHART_A_MAIN_ORGCHART_H
#define ORGCHART_A_MAIN_ORGCHART_H

#pragma once
#include <iostream>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include "Node.hpp"
#include "Iterators.hpp"

using namespace std;
namespace ariel {
    template <typename T>
    class OrgChart {
//
//    private:
//        Node<T> *root;

    public:
        Node<T> *root;

        OrgChart():root(nullptr){}

        OrgChart(const OrgChart &oc) //copy constructor
        {
            if (oc.root != nullptr)
            {
                root = nullptr;
                add_root(oc.root->data);
                copy_nodes(oc.root);
            }
        }

        ~OrgChart() {
            delete_tree(this->root);
        }

        void delete_nodes(Node<T> *node)
        {
            if (node != nullptr)
            {
                while (node->left != nullptr || node->right != nullptr)
                {
                    if (node->right != nullptr)
                    {
                        delete_nodes(node->right);
                        node->right = nullptr;
                    }
                    if (node->left != nullptr)
                    {
                        delete_nodes(node->left);
                        node->left = nullptr;
                    }
                }

                if (node->left == nullptr && node->right == nullptr)
                {
                    delete (node);
                }
            }
        }

        void change_data(Node<T> *node, T new_data)
        {
            node->data = new_data;
        }

        Node* find_node(Node* node,T data) {
            if (node != nullptr)
            {
                if (node->data == data)
                {
                    return node;
                }
                if (node->left != nullptr && node->right != nullptr)
                {
                    Node<T> *temp = find_node(node->left, data);
                    if (temp == nullptr)
                    {
                        return find_node(node->right, data);
                    }
                    return temp;
                }
                if (node->left == nullptr && node->right != nullptr)
                {
                    return find_node(node->right, data);
                }
                if (node->left != nullptr && node->right == nullptr)
                {
                    return find_node(node->left, data);
                }
            }
            return nullptr;
        }


        OrgChart<T> & add_root(T data)  {
            if (root == nullptr)
            {
                root = new Node<T>(data);
                return *this;
            }
            change_data(root, data);
            return *this;
        }




        OrgChart<T>& add_sub(T data,T data) {  }





        public:
            iterator<T> begin_preorder()
            {
                return iterator<T>{order::pre, root};
            }
            iterator<T> end_preorder()
            {
                return iterator<T>{order::pre};
            }

            iterator<T> begin_inorder()
            {
                return iterator<T>{order::in, root};
            }
            iterator<T> end_inorder()
            {
                return iterator<T>{order::in};
            }

            iterator<T> begin_postorder()
            {
                return iterator<T>{order::post, root};
            }
            iterator<T> end_postorder()
            {
                return iterator<T>{order::post};
            }

            iterator<T> begin()
            {
                return begin_inorder();
            }
            iterator<T> end()
            {
                return end_inorder();
            }
        };

}

#endif //ORGCHART_A_MAIN_ORGCHART_H
