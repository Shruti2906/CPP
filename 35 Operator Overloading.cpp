#include <iostream>

using namespace std;

class Complex{
	
	public:
		
		float real;
		float img;
	
		Complex(){
			
		}
		Complex(float real, float img){
			this->real = real;
			this->img = img;
		}
		Complex operator + (Complex c){
			
			Complex temp;
			temp.real = this->real+c.real;
			temp.img = this->img+c.img;
			return temp;
		}
};
int main() {
	
	Complex c1(10, 20), c2(10, 20), c3(0, 0);
	
	c3 = c1+c2;
	
	cout<<"\naddition of "<<c1.real<<" + "<<c1.img<<"i";
	cout<<"\tand\t"<<c2.real<<" + "<<c2.img<<"i";
	cout<<"\tis\t "<<c3.real<<" + "<<c3.img<<"i";
	
	return 0;
}
