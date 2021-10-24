#include "include/list.h"

void List::print_menu(){

    int choice;

    cout << "******************\n" ;
    cout << " 1 - Print list.\n";
    cout << " 2 - Add to list\n";
    cout << " 3 - Delete from list.\n";
    cout << " 4 - Save list.\n";
    cout << " 5 - Quit.\n";
    cout << "Enter your choice and press return: ";

    cin >> choice;

    if(choice == 5){
        return;
    }
    else if (choice == 4)   
    {
        save_list();
    }
    
    else if (choice == 3)
    {
        delete_item();
    }
    else if (choice == 2)
    {
        add_item();
    }
    else if (choice == 1)
    {
        print_list();
    }    
    else{
        cout << "Error! choice not implemented yet!";
    }

}

void List::add_item() {
    cout << "\n\n\n\n\n\n"; 
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item; 

    list.push_back(item);

    cout << "Successfully added!\n\n\n\n" ;
    cin.clear();

    print_menu();
}

void List::delete_item() {
    cout << "*** Delete Item ***\n";
    cout << "Select an item index to delete\n";
    if(list.size()){
        for(int i=0; i < (int)list.size(); i++){
            cout << i << ": " << list[i] << "\n";
        }
        int choicenum;
        cin >> choicenum;
        list.erase(list.begin()+choicenum);
    }
    else{
        cout << "No items to delete!\n";
    }

    print_menu();
}

void List::print_list() {
    cout << "\n\n\n\n\n";
    cout << "*** Printing List ***\n";

    for (int i = 0; i < (int)list.size(); i++){
        cout << " * " << list[i] << "\n";
    }
    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if (choice == 'M' || choice == 'm'){
        print_menu();
    } 
    else{
        cout << "Invalid choice. Quitting ...\n";
    }

}

bool List::find_userlist() {
    bool userfound = false;
    cout << "\n\n\n\n\n\n\n";
    cout << "*** Welcome " << name << " ***\n";

    for (int user_index = 0; user_index < (int)mainlist.size(); user_index++)
    {
        cout << mainlist[user_index][0] << "\n";
        if (mainlist[user_index][0] == name)
        {
            cout << "User has been found! "<< mainlist[user_index][0] << "\n" ;
            list = mainlist[user_index];
            currentUserIndex = user_index;
            userfound = true;
            break; 
        }
        
    }
    
    if (userfound == false){
        list.push_back(name);
        mainlist.push_back(list);
        currentUserIndex = (int)mainlist.size()-1;
    }

    return userfound;
}

void List::save_list() {
    cout << "Saving the list... \n";
    mainlist[currentUserIndex] = list;
    print_menu();

}