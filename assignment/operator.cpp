#include<iostream>
// use of operands

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    string number;

    // Arithemaric operator are used to perform arithmetic operations on variables and data.
    int a,b;

    // Assignment operator are used to assign values to variables
    int c=0;                             
        //here '=' is an assignment operator, other operands "=, += , -= , *= , /= %="


    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    c=a+b; 
        // here '+' is an arithematic operator, other operator "+ , - , * , / , % , ++ , -- "
    cout<<"a="<<a<< endl;
    cout<<"b="<<b<<endl;
    cout<<"1)The sum is:"<<c<<endl;
    
    // Logical operator is used to check whether an expression is true or false.

    if ((a!=0)&&(a>=b)){                          
        // here '&&' is a Logical operator, other operator "&& , || , ! "
        cout<<"3)a is greater than or equal to b."<<endl;  
    }else{  
        cout<<"3)a is less than or equal to b."<<endl;
    }

    
    // Relational operator is used to check the relationship between two operands.

    if (a==b){                                    
        // here '==' is a relational operator, other operator "== , != , > , < , >= ,<=" 
        cout<<"2)a is equal to b."<<endl;
    }else{
        cout<<"2)a is not equal to b."<< endl;
    }

    // A ternary operator evaluates the test condition and executes a block of code based on the result of the condition.

    number=(b>0)?"6)b is positive": "6)b is negative" ;

    cout<<number<<endl;                           
        // here '? :' is ternary operator, used instead of if else.

    return 0;

    // Bitwise operator perform operations on integer data at the individual bit-level
    
    cout<<"4)The bitwise AND(a&b)="<<(a&b)<<endl; 
    
        // here '&' is a bitwise operator, other operator are "& , | , ^ , ~ , << , >> "

    // Conditional operator
    
    if (a>0){
        cout<<"5)a is positive."<<endl;
    }else{                                        
        // here 'if-else' is conditional operator.
        cout<<"5)a is negative."<<endl;
    }
}