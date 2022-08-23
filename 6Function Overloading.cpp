#include <iostream>

using namespace std;

class Greater{

public:
int greaterNo(int n1, int n2){
	if(n1>n2){
		return n1;
	}
	else{
		return n2;
	}
	
}

float greaterNo(float n1, float n2){
	if(n1>n2){
		return n1;
	}
	else{
		return n2;
	}
}

/*char greaterNo(char n1, char n2){
	if(n1>n2){
		return n1;
	}
	else{
		return n2;
	}
	return 'a';
}*/

};
int main() {


	Greater g;
	cout<<"\nGreater int is : "<<g.greaterNo(10, 20);
	cout<<"\nGreater float is : "<<g.greaterNo(10.10f, 20.1f);
	cout<<"\nGreater char is : "<<g.greaterNo('A', 'a'); //implicitly converted to int
	
	return 0;
}

