#include <iostream>

using namespace std;

int main() {
	
	int n1 = 10;
	int *ptr = &n1;
//	cout<<"\n(*ptr)++ : "<<(*ptr)++;
//	cout<<"\n(*ptr++) : "<<(*ptr++);
	cout<<"\n&n1 : "<<&n1;
	cout<<"\nptr : "<<ptr;
	cout<<"\n*(ptr++) : "<<*(ptr++);	//adress stored at ptr is increamented by 4
	cout<<"\n&n1 : "<<&n1;
	cout<<"\nptr : "<<ptr;	//ptr is now pointing to next memory location of n1
	cout<<"\n(*ptr) : "<<(*ptr);
	*ptr = 30;			//change in *ptr will not affect value of n1
	cout<<"\n*ptr : "<<*ptr;
	cout<<"\nn1 : "<<n1;
	
	int n2 = 20;
	int *p2 = &n2;
	cout<<"\n\nn2 : "<<n2;
	cout<<"\n&n2 : "<<&n2;
	cout<<"\np2 : "<<*p2;
	(*p2)++;
	cout<<"\n*p2 : "<<*p2;
	cout<<"\nn2 : "<<n2;
	
	int n3 = 40;
	int *p3 = &n3;
	cout<<"\n\nn3 : "<<n3;
	cout<<"\n*(p3+1) : "<<*(p3+1);
	cout<<"\n*p3+1 : "<<*p3+1;//it will not affect actual value of p3
	
	return 0;
}
