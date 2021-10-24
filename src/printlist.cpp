#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]){
    List simplelist;
    Database data;

    if(arg_count > 1){
        simplelist.name = string(args[1]);
        simplelist.mainlist = data.read();
        simplelist.find_userlist();
        simplelist.print_menu();
        // data.write(simplelist.list);
        // data.read();
    }
    else{
        cout << "No input!" << endl;
    }

    return 0;
}

