#include "OrgChart.hpp"

using namespace std;
using namespace ariel;
namespace ariel {

    
//  OrgChart method

    OrgChart OrgChart::add_root(string root) {return *this;}

    OrgChart OrgChart::add_sub(string a, string b) {return *this;}

    std::ostream &operator<<(ostream &output, const OrgChart &oc) {
        return  output << "it"; }


    //  begin & end iterator  method

    Iterator OrgChart::begin_level_order() {
        Iterator iterator;
        return iterator;}

    Iterator OrgChart::end_level_order() {
        Iterator iterator;
        return iterator;}

    Iterator OrgChart::begin_reverse_order() {
        Iterator iterator;
        return iterator;}

    Iterator OrgChart::reverse_order() {
        Iterator iterator;
        return iterator;}

    Iterator OrgChart::begin_preorder() {
        Iterator iterator;
        return iterator;}


    Iterator OrgChart::end_preorder() {
        Iterator iterator;
        return iterator;}

    Iterator OrgChart::begin()  {
        Iterator iterator;
        return iterator;}

    Iterator OrgChart::end() {
        Iterator iterator;
        return iterator;}



}
//#endif //ORGCHART_A_MAIN_ORGCHART_H
