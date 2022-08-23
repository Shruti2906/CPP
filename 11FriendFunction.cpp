#include <iostream>

using namespace std;

class Demo2;
class Demo1{
	
	friend void add(Demo1, Demo2);
	public :
		int n1;
		
};

class Demo2{
	friend void add(Demo1, Demo2);
	private:
		int n2;
};

void add(Demo1 d1, Demo2 d2){
	
	d1.n1 = 10;
	d2.n2 = 20;
	cout<<"\nDemo1 n1 : "<<d1.n1;
	cout<<"\nDemo12 n2 : "<<d2.n2;
	cout<<"\nAddition : "<<d1.n1+d2.n2;
}
int main() {
	
	Demo1 d1;
	Demo2 d2;
	
	add(d1, d2);
	
	return 0;
}
