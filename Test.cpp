#include <iostream>
#include <OrgChart.hpp>
#include "doctest.h"
#include <string>

using namespace std;
using namespace ariel;


TEST_CASE("Good Test"){
    OrgChart organization;
    organization.add_root("CEO")
      .add_sub("CEO", "CTO")         // Now the CTO is subordinate to the CEO
      .add_sub("CEO", "CFO")         // Now the CFO is subordinate to the CEO
      .add_sub("CEO", "COO")         // Now the COO is subordinate to the CEO
      .add_sub("CTO", "VP_SW") // Now the VP Software is subordinate to the CTO
      .add_sub("COO", "VP_BI")
      .add_sub("CFO", "VP_S");




    SUBCASE("start with begin_level_order and end with end_level_order"){
        vector<string> vec;
        vec.push_back("CEO");
        vec.push_back("CTO");
        vec.push_back("CFO");
        vec.push_back("COO");
        vec.push_back("VP_SW");
        vec.push_back("VP_S");
        vec.push_back("VP_BI");
        size_t i=0;
        for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it){
            CHECK((*it) == vec.at(i));
            i++;
        }
    }

    SUBCASE("start with begin_reverse_order and end with reverse_order"){
        vector<string> vec;        
        vec.push_back("VP_SW");
        vec.push_back("VP_S");
        vec.push_back("VP_BI");
        vec.push_back("CTO");
        vec.push_back("CFO");
        vec.push_back("COO");
        vec.push_back("CEO");
        size_t i=0;
        for (auto it = organization.begin_reverse_order(); it != organization.reverse_order(); ++it){
            CHECK((*it) == vec.at(i));
            i++;
        }
    }
    SUBCASE("start with begin_preorder and end with end_preorder"){
        vector<string> vec;
        vec.push_back("CEO");   
        vec.push_back("CTO");     
        vec.push_back("VP_SW");
        vec.push_back("CFO");
        vec.push_back("VP_S");
        vec.push_back("COO");
        vec.push_back("VP_BI");
        size_t i=0;
        for (auto it=organization.begin_preorder(); it!=organization.end_preorder(); ++it) {
            CHECK((*it) == vec.at(i));
            i++;
        }

    }
}