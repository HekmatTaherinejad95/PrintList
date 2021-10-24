#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    public:
    Database(){

    }
    ~Database(){

    }
    vector<vector<string>> mainlist;
    string name;


    void write(vector<vector<string>> list);
    vector<vector<string>> read();



};