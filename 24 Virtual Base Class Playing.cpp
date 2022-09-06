#include <iostream>

using namespace std;
//Illustrating the ambiguity caused by multile inheritance 
//THE DIAMOND PROBLEM
//and its solution by c++
class Base{
	public:
	int n = 1;
	
		//note the sequence of constructor invoke
		Base(int n){
			cout<<"\n Base Constructor";
			this->n = n;
			cout<<"\nn: "<<n;
		}
		Base(){
			cout<<"\n Base Constructor";
			
			cout<<"\nn: "<<n;
		}
		void show(){
			cout<<"\nBase show..";
		}
};

class Base1:virtual public Base{
	
	public:
		Base1():Base(10){
			cout<<"\n Base1 Constructor";
		}
	
};

class Base2:virtual public Base{
	
	public:
		Base2():Base(20){
			cout<<"\n Base2 Constructor";
		}
	
};
//note 1:
//only one instnce of base class is created among all classe that are virtually inheriting base class,
//but different instnace of base class will be created for class who inherit base class normally
//e.g class base3 inherit base thus constructor of base will get invoke for it
class Base3:virtual public Base{
	
	public:
		Base3():Base(30){
			cout<<"\n Base3 Constructor";
		}
	
};
class Derived: public Base1, public Base2{
	
	public:
		Derived(){
			cout<<"\n Derived Constructor";
		}
		void dShow(){
			//two instance of Base are created, thus 2 show functions are available..which one to call(its called ambiguity)
			//this is called diamond problem
			//one solution to diamond problem is using virtual base class
			//now only one instnace of base class is created 
			show();
			cout<<"\nderived show..";
		}
};

main() {
	
	Derived d;
	d.dShow();
	
	//seperate instance is created for base3
	Base3 b3;
	
	//even if base2 create an object , seperate instance of base class will be created for it
	Base2 b2;
	
	//only one object of base class will be created, only when multiple claasses are invoking base 
	//class virtually ans simultaneously
	
//below statements illustrate that different constructor is called evrytime when object of base class's subclass is created .
	d.n = 90;
	cout<<"\n\nd.n : "<<d.n;
	cout<<"\n\nb2.n : "<<b2.n;
	cout<<"\n\nb3.n : "<<b3.n;
	return 0;
}

/*
note 1:
only one instnce of base class is created among all classe that are virtually inheriting base class,
//but different instnace of base class will be created for class who inherit base class normally
//e.g class base3 inherit base thus constructor of base will get invoke for it
class Base3:public Base{
	
	public:
		Base3(){
			cout<<"\n Base3 Constructor";
		}
	
};


*/





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
