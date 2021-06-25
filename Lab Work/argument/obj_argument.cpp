#include<iostream>
using namespace std;

class student
{
    public:
        double marks;
    student(double m)
    {
        marks = m;
    }
};
void calculateAverage(student s1, student s2)
{
    double average = (s1.marks + s2.marks)/2;
    cout<<"The average marks of two students is :"<<average<<endl;
}
int main(){
    student student1(100.0), student2(200.5);
    calculateAverage(student1 , student2);
    return 0;
}