#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int roll;

public:
    void get_data()
    {
        cout << "Enter your name: " << endl;
        getline(cin, name);
        cout << "Enter your roll no: " << endl;
        cin >> roll;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your roll no is: " << roll << endl;
    }
};
class test : virtual public student //Here virtual class is defined to remove ambuiguity
{
protected:
    float Marks_maths, Marks_Eng;

public:
    void get_marks()
    {
        cout << "Enter your marks in Mathematics: " << endl;
        cin >> Marks_maths;
        cout << "Enter your marks in English: " << endl;
        cin >> Marks_Eng;
    }
    void display_marks()
    {
        cout << "Your Marks in Mathematics is: " << Marks_maths << endl;
        cout << "Your roll in English is: " << Marks_Eng << endl;
    }
};
class sports : virtual public student //Here virtual class is defined to remove ambuiguity
{
protected:
    double score;

public:
    void get_score()
    {
        cout << "Enter your score: " << endl;
        cin >> score;
    }
    void display_score()
    {
        cout << "Your score is: " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    float total;

public:
    void display_total()
    {
        total = Marks_maths + Marks_Eng + score;
        cout << "Your total score is : " << total << endl;
    }
};
int main(){
    result std1;
    std1.get_data();
    std1.get_marks();
    std1.get_score();
    cout<<"Your details are:"<<endl;
    std1.display();
    std1.display_marks();
    std1.display_score();
    std1.display_total();
    return 0;
}