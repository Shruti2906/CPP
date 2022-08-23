#include <iostream>

using namespace std;

class Student{

	private:
		int enrollNo;
		string name;
		int sub1, sub2, sub3;
		int total;
		float perc;
		
	public:
		
		void accept(){
			
			cout<<"\nEnter Student Enrollment No : ";
			cin>>enrollNo;
			cout<<"\nEnter Student Name : ";
			cin>>name;
			cout<<"\nEnter Student marks for Subject 1, subject 2, subject 3 : ";
			cin>>sub1>>sub2>>sub3;
			total = sub1+sub2+sub3;
			cout<<"total: "<<total;
			perc = (total/300.0)*100;	//'/' devide operator returns int result if both its operands are of int type
			cout<<"\nperc: "<<perc;
		}
		
		void display(){
			
			cout<<"\nStudent Enrollment No : "<<enrollNo;
			cout<<"\nStudent Enrollment Name : "<<name;
			cout<<"\nStudent Marks for 3 subjects : "<<sub1<<"\t"<<sub2<<"\t"<<sub3;
			cout<<"\nStudent Marks Total : "<<total;
			cout<<"\nStudent Percentage : "<<perc;
			
		}
		
};

int main() {
	
	Student s;
	s.accept();
	s.display();
	
	return 0;
}
