#include <iostream>
#include <iomanip>
#include "Contact.h"
using namespace std;

class Contact_Manager{
    private:
        Contact Contacts[1000];
        int Contact_Counter=0;

    public:
        void Add_Contact()
        {
            if(Contact_Counter<1000)
            {
                Contacts[Contact_Counter].Set_Contact();
                Contact_Counter++;
            }
            else
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Count Is Full!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

        void Edit_Contact_With_Name(string name)
        {
            bool found = false;

            for(int i=0; i<Contact_Counter; i++)
            {
                if(Contacts[i].Get_Contact_Name() == name)
                {
                    Contacts[i].Update_Contact();
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Not Found!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

        void Edit_Contact_With_Number(string number)
        {
            bool found = false;

            for(int i=0; i<Contact_Counter; i++)
            {
                if(Contacts[i].Get_Contact_Number() == number)
                {
                    Contacts[i].Update_Contact();
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Not Found!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

        void Delete_Contact_With_Name(string name)
        {
            bool found = false;

            for(int i=0; i<Contact_Counter; i++)
            {
                if(Contacts[i].Get_Contact_Name() == name)
                {
                    for(int j=i; j<(Contact_Counter-1); j++)
                    {
                        Contacts[j] = Contacts[j+1];
                    }
                    Contact_Counter--;
                    cout << "Contact Was Deleted Succesfully!" << endl;
                    cout << "---------------------------------------------------------------";
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Not Found!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

        void Delete_Contact_With_Number(string number)
        {
            bool found = false;

            for(int i=0; i<Contact_Counter; i++)
            {
                if(Contacts[i].Get_Contact_Number() == number)
                {
                    for(int j=i; j<(Contact_Counter-1); j++)
                    {
                        Contacts[j] = Contacts[j+1];
                    }
                    Contact_Counter--;
                    cout << "---------------------------------------------------------------";
                    cout << "Contact Was Deleted Succesfully!" << endl;
                    cout << "---------------------------------------------------------------";
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Not Found!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

        void Show_All_Contact()
        {
            if(Contact_Counter == 0)
            {
                cout << "---------------------------------------------------------------";
                cout << "No contacts available!\n";
                cout << "---------------------------------------------------------------";
                return;
            }
            for(int i=0; i<Contact_Counter; i++)
            {
                cout << "---------------------------------------------------------------";
                cout << "---------------------------------------------------------------";
                Contacts[i].Show_Contact();
                cout << "---------------------------------------------------------------";
                cout << "---------------------------------------------------------------";
            }
        }

        void Search_Contact_With_Name(string name)
        {
            bool found = false;

            for(int i=0; i<Contact_Counter; i++)
            {
                if(Contacts[i].Get_Contact_Name() == name)
                {
                    cout << "Succesfully Get Contact!" << endl;
                    cout << "---------------------------------------------------------------";
                    Contacts[i].Show_Contact();
                    cout << "---------------------------------------------------------------";
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Not Found!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

        void Search_Contact_With_Number(string number)
        {
            bool found = false;

            for(int i=0; i<Contact_Counter; i++)
            {
                if(Contacts[i].Get_Contact_Number() == number)
                {
                    cout << "Succesfully Get Contact!" << endl;
                    cout << "---------------------------------------------------------------";
                    Contacts[i].Show_Contact();
                    cout << "---------------------------------------------------------------";
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "---------------------------------------------------------------";
                cout << "Contact Not Found!" << endl;
                cout << "---------------------------------------------------------------";
            }
        }

};
