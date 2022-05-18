//
// Created by בר נחמיאס on 16/05/2022.
//

#ifndef ORGCHART_A_MAIN_NODE_H
#define ORGCHART_A_MAIN_NODE_H
#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::invalid_argument;
using std::ostream;

namespace ariel
    {
        class Node{
        private:
            string data;
            Node * parent;
            vector<Node*> children;

        public:

            Node() : data(nullptr), parent(nullptr){}
            string get_data(){
                return data;
            }
            friend ostream &operator << ( ostream &output, const Node &n){
                return  output << "node";
            }

        };
    }

#endif //ORGCHART_A_MAIN_NODE_H
