#include <iostream>
#include <stdlib.h>
#include <string>
#include <OrgChart.hpp>

using namespace std;
using namespace ariel;

OrgChart::OrgChart(){

}
OrgChart OrgChart::add_root(string str){

}
OrgChart OrgChart::add_sub(string str1, string str2){

}
vector<string>::iterator begin_level_order();
vector<string>::iterator end_level_order();

vector<string>::iterator begin_reverse_order();
vector<string>::iterator reverse_order();
vector<string>::iterator begin_preorder();
vector<string>::iterator end_preorder();

ostream& operator<<(ostream& os,const OrgChart &org);