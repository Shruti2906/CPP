#include <iostream>

using namespace std;

void swap1(int &n1, int &n2){
	
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	cout<<"\n&n1 :"<<&n1;
	cout<<"\nin swap : "<<n1<<"\t"<<n2;
}
int main() {
	
	int n1 = 10, n2 = 20;
	cout<<"&n1: "<<&n1;
	cout<<"\nbefore swap : "<<n1<<"\t"<<n2;
	swap1(n1, n2);
	cout<<"\nafter swap : "<<n1<<"\t\t"<<n2;
	
	return 0;
}
