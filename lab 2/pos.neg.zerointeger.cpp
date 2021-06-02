  
#include <iostream>
using namespace std;

int main() {    
    int num;

    cout<< "Program to check whether the entered num is positive, negative or zero."<<endl;
    cout << "Enter an integer: ";
    cin >> num;

    // main if
    if (num != 0) {
        
        if (num>0){
            cout<<"The Entered Num is positive." <<endl;
        }else {
            cout<<"The Entered Num is negative." <<endl;
        }  
    }
    // main else
    else {
        cout << "The Entered number is Zero" << endl;
    }
    return 0;
}