#include <iostream>

using namespace std;
//Illustrating the ambiguity caused by multile inheritance
//THE DIAMOND PROBLEM

class Base{
	
	public:
		//note the sequence of constructor invoke
		Base(){
			cout<<"\n Base Constructor";
		}
		void show(){
			cout<<"\nBase show..";
		}
};

class Base1:public Base{
	
	public:
		Base1(){
			cout<<"\n Base1 Constructor";
		}
		
};

class Base2:public Base{
	
	public:
		Base2(){
			cout<<"\n Base2 Constructor";
		}
	
};

class Derived:public Base1, public Base2{
	
	public:
		Derived(){
			cout<<"\n Derived Constructor";
		}
		void show(){
			//two instance of Base are created, thus 2 show functions are available..which one to call(its called ambiguity)
			//this is called diamond problem
			//one solution to diamond problem is use class name
			Base1::show();
			Base2::show();
			cout<<"\nderived show..";
		}
};

main() {
	
	Derived d;
	d.show();
	return 0;
}

/*

//note: 2 Base class Instnaces are created here, one for derived1 and one for derived 2
class Base{
	
	public:
		Base(int n){
			cout<<"\n Base Constructor";
			cout<<"\nn: "<<n;
		}
};

class Derived1:public Base{
	
	public:
		Derived1(int n):Base(n){
			cout<<"\n Derived1 Constructor";
		}
};

class Derived2:public Base{
	
	public:
		Derived2(int n):Base(20){
			cout<<"\n Derived2 Constructor";
		}
};
main() {
	
	Derived1 d1(10);
	Derived2 d2(20);
	
	return 0;
}
*/
