#include <iostream>
using namespace std;
class Parent{
	public :
		void virtual fun(){
			cout<<"\nparent..";
		}
};
class Son:public Parent{
	public :
		void fun(){
			cout<<"\nSon..";
		}
};
class GrandSon:public Son{
	public :
		void fun(){
			cout<<"\nGrandSon..";
		}
};
int main() {
	
	Parent *p;
	GrandSon g;
	p = &g;
	p->fun();
	
	Son s;
	p = &s;
	p->fun();
	
	Son *sPtr = &g;
	sPtr->fun();
	
	
	return 0;
}
