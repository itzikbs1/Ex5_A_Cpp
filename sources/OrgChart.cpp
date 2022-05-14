#include <iostream>
#include <stdlib.h>
#include <string>
#include <OrgChart.hpp>

using namespace std;
using namespace ariel;

OrgChart::OrgChart(){

}
OrgChart OrgChart::add_root(string str){
    return *this;
}
OrgChart OrgChart::add_sub(string str1, string str2){
    return *this;
}
vector<string>::iterator OrgChart::begin(){
    vector<string>::iterator vec;
    return vec;
}
vector<string>::iterator OrgChart::end(){
    vector<string>::iterator vec;
    return vec;    
}
vector<string>::iterator OrgChart::begin_level_order(){
    vector<string>::iterator vec;
    return vec;
}
vector<string>::iterator OrgChart::end_level_order(){
    vector<string>::iterator vec;
    return vec;
}

vector<string>::iterator OrgChart::begin_reverse_order(){
    vector<string>::iterator vec;
    return vec;
}
vector<string>::iterator OrgChart::reverse_order(){
    vector<string>::iterator vec;
    return vec;
}
vector<string>::iterator OrgChart::begin_preorder(){
    vector<string>::iterator vec;
    return vec;
}
vector<string>::iterator OrgChart::end_preorder(){
    vector<string>::iterator vec;
    return vec;
}

// ostream& operator<<(ostream& os,const OrgChart &org){
//     return os;
// }