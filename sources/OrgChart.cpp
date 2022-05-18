#include "OrgChart.hpp"

using namespace std;
using namespace ariel;
namespace ariel {

    


    OrgChart OrgChart::add_root(string root) {return *this;}

    OrgChart OrgChart::add_sub(string a, string b) {return *this;}


    std::ostream &operator<<(ostream &output, const OrgChart &oc) {
        return  output << "it";

    }

    Iterator OrgChart::begin_level_order() {
        Iterator it;
        return it;
    }

    Iterator OrgChart::end_level_order() {
        Iterator it;
        return it;
    }

    Iterator OrgChart::begin_reverse_order() {
        Iterator it;
        return it;
    }

    Iterator OrgChart::reverse_order() {
        Iterator it;
        return it;
    }

    Iterator OrgChart::begin_preorder() {
        Iterator it;
        return it;
    }
    Iterator OrgChart::end_preorder() {
        Iterator it;
        return it;
    }

    Iterator OrgChart::begin() {
        Iterator it;
        return it;
    }

    Iterator OrgChart::end() {
        Iterator it;
        return it;
    }



}
//#endif //ORGCHART_A_MAIN_ORGCHART_H
