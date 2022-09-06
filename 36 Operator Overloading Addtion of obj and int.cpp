#include <iostream>

//operator overloading addition of object with primitive types
//binary operator overloading
using namespace std;

template<class x>
class Addition{

		x a;
	public : 
		Addition(){
			a = 0;
		}
		Addition(x a){
			this->a = a;
		}
		x operator+(x n){
			Addition obj;
			obj.a = a+n;
			return obj.a;
		}
};

int main() {
	
	Addition<int> add1(10);
	Addition<float> add2(10);
	int n = 10;
	cout<<"\nAddition of Addition object add and int n is : "<<add1+n;
	cout<<"\nAddition of Addition object add and 10.1f is : "<<add2+10.1f;
	
	return 0;
}
