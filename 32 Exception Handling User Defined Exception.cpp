#include <iostream>

//Exception Handling using function..

using namespace std;

void display(){

	float n1, n2;
	try{
		cout<<"\nEnter two nos : ";
		cin>>n1>>n2;
		if(n2 == 0){
			throw 0;
		}
		float div = n1/n2; 
		cout<<"\ndivision is : "<<div;
	}
	catch(int n){
		cout<<"\n exception divide by zero ..\n";
		throw n; //rethrow exception to caller
	}
}

int main() {
	
	cout<<"\nHello";
//here even if occurs program completed line will not be executed 
//which means main method will know that exception has occurred in display
	try{
		display();	
		cout<<"\nProgram Completed..";
	}
	catch(...){//default catch block
		cout<<"\nSome Exception in display..";
	}
	
	cout<<"\nThank You ..!!";
	
	return 0;
}
