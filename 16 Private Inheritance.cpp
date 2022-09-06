#include <iostream>

//private inheritance
using namespace std;

class A{
	private:
		int x = 10;
	public:
		int y = 20;
	public:
		int z = 30;

};

class B:private A{
	//as B is privately inheriting A, protected and public members of A become private in B
	public:
		void display(){
			cout<<"\nin B, y : "<<y;
			cout<<"\nin B, z : "<<z;
		}
}; 
class C:public B{
	
	public:
		void display(){
			B::display();
		//y and z are now private in B they cannot be accesed in C.	
			
		//	cout<<"\nin C, y : "<<y;
		//	cout<<"\nin C, z : "<<z;
		}	
};

//NOTE : above concepts applies to class B and its subclasses( or any class related to B) 
		//as B is privately inheriting A, but does not affect anywhere else e.g below class.
		
class D:public A{
	
	public:
		void display(){
			
			cout<<"\nin D, y : "<<y;
			cout<<"\nin D, z : "<<z;
		}
};
int main() {
	
	C c;
	c.display();
	
	D d;
	d.display();
	
	return 0;
}
