#include <iostream>
/*
step 1: greaterInt(){}, greaterFloat(){}, greaterChar(){}
step 2: overloading greater(int ,int){}, greater(float, float), greater(char, char)
step 3: template greater(t a, t b){}
but in case of overloading we can provide diffrent implementation to diffrent functions
in template function only data type chages but implementation remains same as we are using only one method.

*/

using namespace std;

template <class T, int n>
T Greater1(T a, T b){

	if(a>b)	{
		return a;
	}
	else{
		return b;
	}
}	//even ; is valid here

template <class x> 
char* fun(){
	return "Hello";
}

int main() {
	
	cout<<"\n"<<fun<int>();
	cout<<"\ngreater is : "<<Greater1<int, 100>(10, 20);
	cout<<"\ngreater is : "<<Greater1<int, 100>(10, 20);
	cout<<"\ngreater is : "<<Greater1<int, 100>(10, 20);
	cout<<"\nBye";
	return 0;
}
