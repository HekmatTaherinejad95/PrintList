#include <iostream>
#include <vector>

using namespace std;

class List {
    public:
    List(){

    }
    ~List(){

    }
    vector<vector<string>> mainlist;
    vector<string> list;
    string name;
    int currentUserIndex;

    void print_menu(); 
    void print_list();
    void add_item();
    void delete_item();
    bool find_userlist();
    void save_list();


};