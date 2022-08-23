#include <iostream>

using namespace std;

class Employee{

	private:
		int id;
		string name;
		double sal;
	public:

		Employee(int id, string name, double sal){
			this->id = id;
			this->name = name;
			this->sal = sal;
		}
		void display(){
			cout<<"\nId\t:\t"<<id;
			cout<<"\nName\t:\t"<<name;
			cout<<"\nSalary\t:\t"<<sal;
		}
				
};

class Manager:public Employee{
	
	private:
		double bonus;
	public:
		Manager(int id, string name, double sal, double bonus):Employee(id, name, sal){
			this->bonus = bonus;
		}
		void display(){
			Employee::display();
			cout<<"\nBonus\t:\t"<<bonus;
		}
};

class Developer:public Employee{
	
	private:
		int noOfhrs;
	public:
		Developer(int id, string name, double sal, int noOfhrs):Employee(id, name, sal){
			this->noOfhrs = noOfhrs;
		}
		void display(){
			Employee::display();
			cout<<"\no Of Hours  :\t"<<noOfhrs;
		}
};

int main() {
		
	Manager m(101, "manager", 200000, 4000);
	m.display();
	cout<<"\n\n\n";
	Developer d(101, "Developer", 200000, 7);
	d.display();
	return 0;
}
