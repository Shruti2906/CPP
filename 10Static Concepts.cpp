#include <iostream>

using namespace std;

class Employee{
	
	public:
		int empId;
		static int deptNo;
	
		Employee(){
			cout<<"\nin Constructor empId : "<<empId;
		}
		void display(){
			cout<<"\n\nempId : "<<empId;
			cout<<"\ndeptNo : "<<deptNo;
		}
		static void show(){
			
			Employee emp;
			cout<<"\n\nIn static show : ";
			cout<<"deptNo : "<<deptNo;
			cout<<"\nEmpId : "<<emp.empId;//object of Employee has to be created before accesing empId.
									//as the memory for empId will be allocated only when Employee's object is created.
			
		}
		
};
int Employee::deptNo = 1;//by default 0..
					//this is called as defination of statci variable
					//memory for the static variable is allocated only after this statement

int main() {
	
	cout<<"\ndeptNo using :: : "<<Employee::deptNo;
	Employee e1, e2;
	e1.empId = 101;
	e1.deptNo = 10;
	e1.display();
	
	e2.empId = 102;
	e2.deptNo = 20;
	e2.display();
	
	e1.display();
	
	
	return 0;
}
