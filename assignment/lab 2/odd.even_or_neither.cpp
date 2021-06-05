#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer: ";  
    cin >> num;    

    // main if
    if (num != 0) {
        
        if (num>0){

        
            if (num % 2 == 0) {
                cout << "The Entered number is even." << endl;
            }else {
                cout << "The Entered number is odd." << endl;
            }  
        }else {
            cout<<"The Entered Num is negative." <<endl;
        }  
    }
    // main else
    else {
        cout << "The Entered number is Zero" << endl;
    }
}