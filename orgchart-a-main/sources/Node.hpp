//
// Created by בר נחמיאס on 16/05/2022.
//

#ifndef ORGCHART_A_MAIN_NODE_H
#define ORGCHART_A_MAIN_NODE_H
#pragma once

namespace ariel
{
    template <typename T>
    struct Node
    {
        T data;
        Node *right, *left;
        Node() : data(nullptr), right(nullptr), left(nullptr) {}
        Node(T data) : data(data), right(nullptr), left(nullptr) {}
    };
}
#endif //ORGCHART_A_MAIN_NODE_H
