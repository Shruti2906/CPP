#include <iostream>

//nested try block..
using namespace std;

int main() {
	
	int n1, n2;
	try{
		cout<<"\nEnter two nos (below 100): ";
		cin>>n1>>n2;
		if(n2 == 0){
			throw 0;
		}
		try{
			if(n2 > 100){
				throw 100;
			}
			float div = n1/n2;
			cout<<"\nDivision Successfull..";
		}
		catch(int n){
			cout<<"\nSorry we won't take no above 100..";
			
		}
		cout<<"\nfrom end of try block..";
	}
	catch(int n){
		cout<<"\n exception divide by zero ..";
	}
	cout<<"\nThank You ..!!";
	return 0;
}
