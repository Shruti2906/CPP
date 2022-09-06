#include <iostream>

using namespace std;

int main() {
	
	float n1, n2;
	try{
		cout<<"\nEnter two nos : ";
		cin>>n1>>n2;
		if(n1 == 0){
			throw 0;
		}
		float div = n1/n2;
		cout<<"\ndivision is : "<<div;
	}
	catch(int n){
			cout<<"\ndivideby zero : Exception..";
	}
	cout<<"\nThank You .!";
	return 0;
}
