//
// Created by בר נחמיאס on 16/05/2022.
//

#ifndef ORGCHART_A_MAIN_ORGCHART_H
#define ORGCHART_A_MAIN_ORGCHART_H

#include <iostream>
#include <vector>
#include "Node.hpp"
#include <queue>
#include <deque>
#include <stack>
using std::string;
using std::vector;
using std::invalid_argument;
using std::ostream;
namespace ariel
{
    class Iterator;
    class Iterator{

    protected:
        Node* curr;
        std::queue<Node*>nodes_order;

    public:
        Iterator(){};


//        operators
        Node operator*(){
            return Node();
        }

        Iterator operator++(){
            return *this;
        }
        string* operator->() const{
            return nullptr;
        }
        bool operator == (const Iterator &it)const{
            return false;
        }
        bool operator != (const Iterator &it)const{
            return false;
        }


    };

    class OrgChart
    {

    private:
        Node  *root;

    public:

        OrgChart():root(nullptr){}
        ~OrgChart(){}


        OrgChart add_root(string root);
        OrgChart add_sub(string a, string b );

//        iterators begin and end

        friend ostream &operator << ( ostream &output, const OrgChart &oc);

        Iterator begin_level_order();
        Iterator end_level_order();

        Iterator begin_reverse_order();
        Iterator reverse_order();

        Iterator begin_preorder();
        Iterator end_preorder();

        Iterator begin();
        Iterator end();



    };


}

#endif //ORGCHART_A_MAIN_ORGCHART_H
