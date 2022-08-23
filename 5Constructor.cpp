#include <iostream>
#include<string>
using namespace std;

class Employee{
	private:
		int empId;
		string name;
		double empSal;
	
	public:
		//do nothing constructor
		Employee(){
			
		}
		//constructor is used to allocating the memory initializing data members
	Employee(int id, string nm, double sal){
		if(id>0){	//such verifications can be provided using cconstructor
			empId = id;
		}	
		name = nm;
		empSal = sal;
	}
	//copy constructor
	Employee(Employee *emptemp){
		cout<<"\nCopy Constructor called..";
		this->empId = emptemp->empId;
		this->name = emptemp->name;
		this->empSal = emptemp->empSal;
	}
	
	//destructor
	~Employee(){
		cout<<"\nDestructor called..";
	}
};
int main() {
	
	Employee emp(101, "john", 20220);
	Employee e1(&emp);
	//destructor has to be written explicitly.
	//cpp does not provide any destructor.
	//destructor will be called automatically by the end of program.
	return 0;
}
