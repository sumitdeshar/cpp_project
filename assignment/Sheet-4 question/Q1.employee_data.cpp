#include <iostream>
#include <string.h>
using namespace std;

class staff
{
    protected:
        int code;
        string name;

    public:
        void getdata_info()
        {
            cout<<"Enter your code:"<<endl;
            cin>>this->name;
        }
};
class teacher : public staff{
    protected:
        string subject, book;

    public:
        void getdata_teacher(){
            cout<<"enter the subject of teacher:"<< endl;
            cin>>this->subject;
            cout<<"enter the publictaion of book of teacher:"<< endl;
            cin>>this->book;
        }
        void display_teacher(){
            cout<<"name of teacher:"<<this->name<<endl;
            cout<<"code of"<<this->name<<"is:"<< this->code<<endl;
            cout<<this->name<<"teaches"<<this->subject<<endl;
            cout<<this->name<<"uses"<<this->book<<endl;
        }
};
class officer : public staff{
    protected:
    string grade;

    public:
    void getdata_officer(){
        cout<<"enter the grade of officer:"<<endl;
        cin>>this->grade;
    }
    void display_officer(){
        cout<<"name of officer:"<<this->name<<endl;
        cout<<"code of "<<this->name<<"is:"<<this->code<<endl;
        cout<<"grade of"<<this->name<<"is:"<<this->grade<<endl;
    }
};
class typist : public staff{
    protected:
    float speed;
    public:
    void getdata_typist(){
        cout<<"Enter your typing speed"<<endl;
        cin>>this->speed;
    }
};
class regular : public typist{
    protected:
    float wage;
    public:
    void getdata_regular()
    {
       cout<<"enter the wage of typist"<<endl;
       cin>>this->wage;   
    }
    void display_regular(){
        cout<<"name of typist is:"<<this->name<<endl;
        cout<<"code of"<<this->name<<"is:"<<this->code<<endl;
        cout<<"wage of"<<this->name<<"is:"<<this->wage<<endl;
    }
};
class casual : public typist{
    protected:
    float wage;
    public:
    void getdata_casual()
    {
        cout << "Enter the wages of typist: " << endl;
        cin >> this->wage;
    }
    void display_casual(){
        cout<<"name of typist is:"<<this->name<<endl;
        cout<<"code of"<<this->name<<"is:"<<this->code<<endl;
        cout<<"wage of"<<this->name<<"is:"<<this->wage<<endl;
    }
};
int main()
{

    teacher t;
    officer o;
    typist ty;
    regular r;
    casual c;
    char d;
    int choice;

    do
    {
        cout << "For creation of database, please enter the information as asked." << endl;
        cout << "Choose code for entering:" << endl;
        cout << "Teacher"
             << "\t"
             << "1" << endl;
        cout << "Officer"
             << "\t"
             << "2" << endl;
        cout << "Typist"
             << "\t"
             << "3" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.getdata_info();
            t.getdata_teacher();
            break;
        case 2:
            o.getdata_info();
            o.getdata_officer();
            break;
        case 3:
        {
            char a;
            cout << "Regular or casual typist?"
                 << "\n Enter R for regular and C for casual:" << endl;
            cin >> a;
            if (a == 'R' || a == 'r')
            {
                r.getdata_info();
                r.getdata_typist();
                r.getdata_regular();
            }
            else if (a == 'C' || a == 'c')
            {
                c.getdata_info();
                c.getdata_typist();
                c.getdata_casual();
            }
            else
            {
                cout << "Invalid input" << endl;
            }
            break;
        }
        default:
            cout << "Invalid input" << endl;
            break;
        }
        cout << "Do you want to continue(Y/N):" << endl;
        cin >> d;
    } while (d == 'Y' || d == 'y');

    do
    {

        cout << "For retrieving data from database, please enter code:" << endl;
        cout << "Teacher"
             << "\t"
             << "1" << endl;
        cout << "Officer"
             << "\t"
             << "2" << endl;
        cout << "Typist"
             << "\t"
             << "3" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.display_teacher();
            break;
        case 2:

            o.display_officer();
            break;
        case 3:
        {
            char a;
            cout << "Regular or casual typist?"
                 << "\n Enter R for regular and C for casual:" << endl;
            cin >> a;
            if (a == 'R' || a == 'r')
            {

                r.display_regular();
            }
            else if (a == 'C' || a == 'c')
            {

                c.display_casual();
            }
            else
            {
                cout << "Invalid input" << endl;
            }
            break;
        }
        default:
            cout << "Invalid input" << endl;
            break;
        }

        cout << "Do you want to continue(Y/N):" << endl;
        cin >> d;

    } while (d == 'Y' || d == 'y');
    return 0;
}