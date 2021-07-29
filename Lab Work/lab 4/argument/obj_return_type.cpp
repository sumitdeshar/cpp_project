#include<iostream>
using namespace std;

class Complex {

	public:
		int real, imaginary;

	Complex() // Empty constructor so that later C3 can be called to store sum
	{
	}

	// Constructor to accept real and imaginary part which goes as argument
	Complex(int Real1, int Imaginary1)
	{
		real = Real1;
		imaginary =Imaginary1;
	}

	// Defining addComp() method for adding two complex number
	Complex addComp(Complex C1, Complex C2)
	{
		Complex num;
		num.real = C1.real + C2.real;   
		num.imaginary = C1.imaginary + C2.imaginary; 
		return num;
	}
};

int main()
{
	
	Complex C1st(2,5);   
	Complex C2nd(9, 5);  
	Complex C3;    
		cout<<"First complex is "<<C1st.real<<" + i"<< C1st.imaginary<<endl;
		cout<<"Second complex is "<<C2nd.real<<" + i"<< C2nd.imaginary<<endl;
	
	C3 = C3.addComp(C1st, C2nd); // calling addComp() method
		cout<<"Sum of complex number : "<< C3.real << " + i"	<< C3.imaginary;
    return 0;			
}