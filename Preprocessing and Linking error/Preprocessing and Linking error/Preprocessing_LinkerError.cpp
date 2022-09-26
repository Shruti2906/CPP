#include <iostream>
#include "HeaderFileTrial.h";
#include "InternalHeaderFile.h";
//while preprocessing this header files(HeaderFileTrial, InternalHeaderFile etc) will get replaced with their actual defination
//i.e #include<iostream>
/*
	void sayHello(){
	
		std::cout<<"\nHello..";
	}
*/

//thus if both test() and main() call sayhi function there will be two definations of it, which will cause Compiler error

using namespace std;
void Test();
int main() {
	
	cout<<"\nHello from main.."	;
	sayHi();
	sayHi();
	cout<<"\nsayHi called..";
	sayHello();
	cout<<"\nsayHello called..";
	Test();
	cout<<"\nmain end...";
	
	return 0;
}
