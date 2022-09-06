#include <iostream>

using namespace std;

class Base1{
	
	public :
		Base1(){
			cout<<"\nBase 1 Constructor...";
		}
		void show1(){
			cout<<"\nBase1 show..";
		}
		void print(){
			cout<<"\nBase1 print..";
		}
};

class Base2{
	
	public :
		Base2(){
			cout<<"\nBase 2 Constructor...";
		}
		void show2(){
			cout<<"\nBase2 show..";
		}
		void print(){
			cout<<"\nBase1 print..";
		}
		
};

class Derived:public Base1, public Base2{//first Base1 constructor then Base2 constructor
	
	public :
		Derived(){
			cout<<"\nDerived Constructor...";
		}
		void show(){
			
			cout<<"\n";
			show1();
			show2();
			cout<<"\nDerived show..";
		}
		void print(){
			
			
			//to resolve the ambiguity between Base1 and Base2 print function
			cout<<"\n";
			Base1::print();
			Base2::print();
			cout<<"\nDerived print..";
		}
		
};

int main() {

	Derived d;
	d.show();
	d.print();
	
	return 0;
}
