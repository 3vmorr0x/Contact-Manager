#include <iostream>
#include <iomanip>
using namespace std;


class Contact{
    private:
        string name;
        string number;
        string email;
        string location;

    public:

        Contact(string name="", string number="", string email="", string location="")
        {
            this->name = name;
            this->number = number;
            this->email = email;
            this->location = location;
        }

        void Set_Contact(){
            getline(cin >> ws, name);

            cout << "enter the name : ";
            getline(cin, name);

            cout << "enter the number : ";
            getline(cin, number);

            cout << "enter the email : ";
            getline(cin, email);

            cout << "enter the location : ";
            getline(cin, location);
        };

        void Show_Contact(){
            cout << " | Name: " << name << endl
             << " | Phone: " << number << endl
             << " | Email: " << email << endl
             << " | Address: " << location << endl;
        }

        string Get_Contact_Name(){
            return name;
        };

        string Get_Contact_Number(){
            return number;
        };

        void Update_Contact()
        {
            getline(cin >> ws, name);

            cout << "enter the name : ";
            getline(cin, name);

            cout << "enter the number : ";
            getline(cin, number);

            cout << "enter the email : ";
            getline(cin, email);

            cout << "enter the location : ";
            getline(cin, location);
        }
};
