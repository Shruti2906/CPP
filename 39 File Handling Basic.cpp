#include <iostream>
#include<fstream>

/*
					iostream
		istream					ostream
  (input from keyboard)	  	(output on monitor)

for File :
	
					fstream
		ifstream				ofstream
	(input from file)		(output tp file)

*/

using namespace std;

int main() {
	
	ofstream fObj("D://July 22 C++/fileHandling.txt");
	fObj<<"This is Basic Example of file handling..";
	fObj<<"\nthe first program to learn how to use ofstream and ifstream..";
	cout<<"\nData saved to file";
	cout<<"\nLet's read the data from file..\n\n";
	
	fObj.close();	//close the stream opened for the file
	
	ifstream iObj("fileHandling.txt");
	char arr1[10], arr2[10], arr3[10], arr4[10];
	iObj>>arr1>>arr2>>arr3>>arr4;
	cout<<"\n"<<arr1<<arr2<<arr3<<arr4;
	
	return 0;
}
