#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

// #include <fstream>
// #include <sstream>
// #include <stdexcept>

using namespace std;
namespace ariel{

class OrgChart{

private:
    vector<string> vec;
public:
    OrgChart();
    OrgChart add_root(string str);
    OrgChart add_sub(string str1, string str2);
    vector<string>::iterator begin();
    vector<string>::iterator end();
    vector<string>::iterator begin_level_order();
    vector<string>::iterator end_level_order();
    vector<string>::iterator begin_reverse_order();
    vector<string>::iterator reverse_order();
    vector<string>::iterator begin_preorder();
    vector<string>::iterator end_preorder();

    // friend std::ostream& operator<<(ostream& os,const OrgChart &org);
    friend ostream& operator<<(ostream& os,const OrgChart &org){
    return os;
    }
};
class Node{

    public:
        string _name;
        vector<Node*> sub_node;
        Node(string name) : _name(move(name)), sub_node(0){}
        Node(string name, vector<Node*> sub) : _name(move(name)), sub_node(move(sub)){}         
    };
}