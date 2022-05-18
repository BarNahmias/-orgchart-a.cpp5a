#include "doctest.h"
#include "OrgChart.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::endl;
using std::cout;
using namespace ariel;






TEST_CASE("add && sub "){
    OrgChart organization;
    CHECK_NOTHROW(organization.add_root("ABRAM"));
    CHECK_NOTHROW(organization.add_sub("ABRAM","IZAAK"));
    CHECK_NOTHROW(organization.add_root("IZAAK"));
    CHECK_NOTHROW(organization.add_sub("IZAAK","YAKOV"));
    CHECK_THROWS(organization.add_sub("YAKOV","SIMON"));
    CHECK_THROWS(organization.add_sub("SARA","RACHEL"));
}

TEST_CASE("levelord"){
    OrgChart organization;
    CHECK_NOTHROW(organization.add_root("1"));
    CHECK_NOTHROW(organization.add_sub("1", "2"));
    CHECK_NOTHROW(organization.add_sub("1", "3"));
    CHECK_NOTHROW(organization.add_sub("2", "4"));
    CHECK_NOTHROW(organization.add_sub("2", "5"));
    CHECK_NOTHROW(organization.add_sub("3", "6"));
    CHECK_NOTHROW(organization.add_sub("3", "7"));
    CHECK_NOTHROW(organization.add_sub("4", "8"));
    CHECK_NOTHROW(organization.add_sub("4", "9"));
    CHECK_NOTHROW(organization.add_sub("5", "10"));
    CHECK_NOTHROW(organization.add_sub("5", "11"));
    CHECK_NOTHROW(organization.add_sub("6", "12"));
    CHECK_NOTHROW(organization.add_sub("6", "13"));
    CHECK_NOTHROW(organization.add_sub("7", "14"));
    CHECK_NOTHROW(organization.add_sub("7", "15"));


    vector<string> levelord;
    for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it){
        levelord.push_back((*it).get_data());
    }
    vector<string> chaek;
    chaek.push_back("1");
    chaek.push_back("2");
    chaek.push_back("3");
    chaek.push_back("4");
    chaek.push_back("5");
    chaek.push_back("6");
    chaek.push_back("7");
    chaek.push_back("8");
    chaek.push_back("9");
    chaek.push_back("10");
    chaek.push_back("11");
    chaek.push_back("12");
    chaek.push_back("13");
    chaek.push_back("14");
    chaek.push_back("15");

    for (unsigned long i = 1; i <16 ; ++i) {
        CHECK(chaek.at(sizeof(string)*i)==levelord.at(sizeof(string)*i));
    }
}

