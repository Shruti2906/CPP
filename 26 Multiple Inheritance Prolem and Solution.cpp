#include <iostream>

using namespace std;

//note here methods that are causing ambiguity are declared in class itself
//in case of diamond problem both the methods were inherited from same class in diffrent classes
class Base1{

	public:
		void print(){
			cout<<"\nprint of base 1";
		}
};

class Base2{
	public:
		void print(){
			cout<<"\nprint of base 2";
		}
};

class Derived:public Base1, public Base2{
		//how to call base class method
	public:
		void display(){
			//1 :
			//using base class name and :: (scope resolution operator)
			Base1::print();
			Base2::print();
			cout<<"\ndisplay of derived..";
		}
};

int main() {
	
	Derived *d;
	d->display();
	
	//2 : 
	//using pointer of base class itself
	Base1 *base1;
	base1->print();
	
	Base2 *base2;
	base2->print();
	
	//3 :
	//using derived class pointer and base class name
	d->Base1::print();
	d->Base2::print();
	
	return 0;
}
