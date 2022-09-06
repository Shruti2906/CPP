#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Employee{
	
	private :
		int empId;
		char empName[30];
		double empSal;
	public:
			Employee(){
				
			}
			Employee(int id, char nm[], double sal){
				empId = id;
				strcpy(empName, nm);
				empSal = sal;	
			}
			void accept(){
				cout<<"\nEnter Employee Id : ";
				cin>>empId;
				cout<<"\nEnter Employee Name : ";
				cin>>empName;
				cout<<"\nEnter Employee Salary : ";
				cin>>empSal;
			}
			int getempId(){
				return empId;
			}
			char* getempName(){
				return empName;
			}
			double getempSal(){
				return empSal;
			}
};

int main() {

	ofstream fObj("D://July 22 C++/FileHandlingPlaying.txt");
	Employee emp;
	emp.accept();
	fObj<<emp.getempId()<<emp.getempName()<<emp.getempSal();
	cout<<"\nDone with writing..\n";
	char ch;
	
	fObj.close();
	
	//read from file in reverse order
	
	ifstream ifill("FileHandlingPlaying.txt");
	ifill.seekg(5, ios::beg);//seeks to the 5 characters from begening of file
	ifill.seekg(-1, ios::end);//seeks to the end of file
	int pos = ifill.tellg();//read total o of charaters
	while(pos>=0){
		pos = pos-1;
		ifill.read((char*)&ch, sizeof(char));
		cout<<ch;
		//after read cursor automatically moves after the charater which has been read
		//e.g "Hello"  here after read() cursor will move after o
		//to read l we need to take cursor before l
		//so take it back using -2
		//and the read l
		ifill.seekg(-2, ios::cur);
		
	}
	
	
	return 0;
}
