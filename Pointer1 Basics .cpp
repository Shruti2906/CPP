#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n1 = 10;
	int *ptr = 0;//null pointer- pointing to nowhere
	int *p;//pointing to some random location
	int *p1 = 0;	//good practice
	p1 = &n1;	
	
//	cout<<"\n*ptr : "<<*ptr; //invalid
	cout<<"\np : "<<p;//it is pointing to some random location
	cout<<"\n*p : "<<*p;
	
	return 0;
}
//declaring pointer as null and making it refere to some memory location is good practice
//as declaring pointer without assigning it an address could be dangerous as it will point 
//to some random memory location, wich could be private (system reserved).
//thus
//int *ptr = 0;
//ptr = &n1; //is good practice.
//or int *ptr = &n1;
