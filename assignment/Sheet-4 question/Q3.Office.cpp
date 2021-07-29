#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    float code;

public:
    void getdata()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your code: " << endl;
        cin >> code;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your code is: " << code << endl;
    }
};
class account : public virtual person
{
protected:
    float pay;

public:
    void getdata_account()
    {
        cout << "Enter your payment: " << endl;
        cin >> pay;
    }
    void display_account()
    {
        cout << "Your payment is: " << this->pay << endl;
    }
};
class admin : public virtual person
{
protected:
    float experience;

public:
    void getdata_admin()
    {
        cout << "Enter you experience: " << endl;
        cin >> experience;
    }
    void display_admin()
    {
        cout << "Your experience is: " << this->experience << endl;
    }
};
class master : public admin, public account
{
public:
    master()
    {
    }
};

int main()
{
    master s3;
    int choice;
    char c;
    do
    {
        cout << "Enter your choice: " << endl;
        cout << "press 1 for Account" << endl;
        cout << "press 2 for Admin" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            s3.getdata();
            s3.getdata_account();
            break;
        case 2:
            s3.getdata();
            s3.getdata_admin();
            break;

        default:
            cout << "Select a valid input" << endl;
            break;
        }
        cout << "Do you want to update information(Y/N):" << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');

    cout << "Displaying entered information" << endl;

    do
    {
        cout << "Enter your choice: " << endl;
        cout << "press 1 for Account" << endl;
        cout << "press 2 for Admin" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            s3.display();
            s3.display_account();
            break;
        case 2:
            s3.display();
            s3.display_admin();
            break;

        default:
            cout << "Select a valid input" << endl;
            break;
        }
        cout << "Do you want to update information(Y/N):" << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');

    return 0;
}