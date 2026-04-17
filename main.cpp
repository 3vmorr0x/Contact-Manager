#include <iostream>
#include <iomanip>
#include "Contact.h"
#include "Contact_Manager.h"
using namespace std;


int main(){
    cout << "Welcome in contact manager!";

    Contact_Manager processor;
    string name;
    string number;

    int choice_list;
    int choice_list2;
    int choice_list3;
    int choice_list4;

    bool in_progress = true;

    while(in_progress)
    {
        bool Is_Choice_List2_True=true;
        bool Is_Choice_List3_True=true;
        bool Is_Choice_List4_True=true;
        cout << "---------------------------------------------------------------";
        cout << "\n1. Add Contact \n2. Edit Contact \n3. Delete Contact \n4. Search Contact \n5. Show All Contact \n6. Exit" << endl;
        cout << "Choose what u need: ";
        cout << "---------------------------------------------------------------";

        cin >> choice_list;

        if(choice_list==1)
        {
            processor.Add_Contact();
        }

        else if(choice_list==2)
        {
            while(Is_Choice_List2_True)
            {
                cout << "---------------------------------------------------------------";
                cout << "Edit With ? 1. Name / 2. Number: ";
                cout << "---------------------------------------------------------------";
                cin >> choice_list2;

                if(choice_list2==1)
                {
                    getline(cin >> ws, name);
                    cout << "---------------------------------------------------------------";
                    cout << "Enter Name To Edit : ";
                    cout << "---------------------------------------------------------------";
                    getline(cin, name);
                    processor.Edit_Contact_With_Name(name);
                    Is_Choice_List2_True=false;
                }
                else if(choice_list2==2)
                {
                    getline(cin >> ws, name);
                    cout << "---------------------------------------------------------------";
                    cout << "Enter The Number To Edit : ";
                    cout << "---------------------------------------------------------------";
                    getline(cin, number);
                    processor.Edit_Contact_With_Number(number);
                    Is_Choice_List2_True=false;
                }
                else
                {
                    cout << "---------------------------------------------------------------";
                    cout << "Wrong Choice! Try Again .." << endl;
                    cout << "---------------------------------------------------------------";
                }
            }
        }

        else if(choice_list==3)
        {
            while(Is_Choice_List3_True)
            {
                cout << "---------------------------------------------------------------";
                cout << "Delete With ? 1. Name / 2. Number: ";
                cout << "---------------------------------------------------------------";
                cin >> choice_list3;

                if(choice_list3==1)
                {
                    getline(cin >> ws, name);
                    cout << "---------------------------------------------------------------";
                    cout << "Enter Name To Delete : ";
                    cout << "---------------------------------------------------------------";
                    getline(cin, name);
                    processor.Delete_Contact_With_Name(name);
                    Is_Choice_List3_True=false;
                }
                else if(choice_list3==2)
                {
                    getline(cin >> ws, name);
                    cout << "---------------------------------------------------------------";
                    cout << "Enter The Number To Delete : ";
                    cout << "---------------------------------------------------------------";
                    getline(cin, number);
                    processor.Delete_Contact_With_Number(number);
                    Is_Choice_List3_True=false;
                }
                else
                {
                    cout << "---------------------------------------------------------------";
                    cout << "Wrong Choice! Try Again .." << endl;
                    cout << "---------------------------------------------------------------";
                }
            }
        }

        else if(choice_list==4)
        {
            while(Is_Choice_List4_True)
            {
                cout << "---------------------------------------------------------------";
                cout << "Search With ? 1. Name / 2. Number: ";
                cout << "---------------------------------------------------------------";
                cin >> choice_list4;

                if(choice_list4==1)
                {
                    getline(cin >> ws, name);
                    cout << "---------------------------------------------------------------";
                    cout << "Enter Name To Search : ";
                    cout << "---------------------------------------------------------------";
                    getline(cin, name);
                    processor.Search_Contact_With_Name(name);
                    Is_Choice_List4_True=false;
                }
                else if(choice_list4==2)
                {
                    getline(cin >> ws, name);
                    cout << "---------------------------------------------------------------";
                    cout << "Enter The Number To Search : ";
                    cout << "---------------------------------------------------------------";
                    getline(cin, number);
                    processor.Search_Contact_With_Number(number);
                    Is_Choice_List4_True=false;
                }
                else
                {
                    cout << "---------------------------------------------------------------";
                    cout << "Wrong Choice! Try Again .." << endl;
                    cout << "---------------------------------------------------------------";
                }
            }
        }

        else if(choice_list==5)
        {
            processor.Show_All_Contact();
        }

        else
        {
            in_progress = false;
            break;
        }
    }
}