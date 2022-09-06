#include <iostream>
//Exception handling is used to avoid run time errors
//run time errors are the errors that occur during execution of program..
using namespace std;

int main() {
	
	float n1, n2;
	
	cout<<"\nEnter two nos : ";
	cin>>n1>>n2;
	
	cout<<"\nHello..";
	try{
		if(n2 == 0){
			throw 0;	//All the statements in try block will be skiped after this statement if exception occured..
						//and execution of program will continue after try block..
		}
		if(n2 < 0){
			throw 1.0f;
		}
		if(n2 == 10){		//just to demonstrate default catch block
			throw 'a';
		}
		float div = n1/n2;
		cout<<"\nn1/n2 : "<<div;
	}
	//cout<<"\nstatement after try block..";
	catch(int n){
		cout<<"\nException found : divide by "<<n;
	}
	catch(float f){
		cout<<"\nException found : divide -ve number";
	}
	catch(...){		// catch all block..
					//if throw type doesn't match with any of the try block default catch lock will handle it.
					//should be defined at last among all catch blocks
		cout<<"\n\nException Occured...\n";
	}
	cout<<"\nstatement after try-catch block..";
	cout<<"\nThank You .!";
	
	return 0;
}
