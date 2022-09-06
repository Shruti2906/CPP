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
	}

}

int main() {
	
//here even if exception occurs program completed line will be executed 
//which means main method doesn't know that exception has occurred in display
	cout<<"\nHello";
	display();
	cout<<"\nProgram Completed..";
	cout<<"\nThank You ..!!";
	return 0;
}
