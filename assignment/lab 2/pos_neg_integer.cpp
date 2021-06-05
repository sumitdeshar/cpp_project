#include <iostream>
using namespace std;

int main() {    
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num>0){
    cout << "The Entered Number is positive";  
    } else{
        cout << "The Entered Number is Negative";
    }
    return 0;
}